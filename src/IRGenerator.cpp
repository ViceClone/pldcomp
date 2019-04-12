#include "IRGenerator.h"
#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include "PLDCompParser.h"
#include "misc/Interval.h"
#include "IR.h"
using namespace std;
using namespace antlr4;

void IRGenerator::output_asm(ostream& o) {
    #ifdef DEBUG
    cerr << "--------------------OUTPUT TO OUT.ASM--------" << endl;
    #endif
    o << ".text" << endl << endl;
    for (auto it=cfg_list.begin();it!=cfg_list.end();++it) {
        it->second->gen_asm(o);
    }
    #ifdef DEBUG
    cerr << "--------------------END OUTPUT TO OUT.ASM--------" << endl;
    #endif
}

void IRGenerator::set_filename(string name) {
    filename = name;
}
antlrcpp::Any IRGenerator::visitProg(PLDCompParser::ProgContext *ctx) {
    try {
        return visitChildren(ctx);
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitFunctiondefinition(PLDCompParser::FunctiondefinitionContext *ctx) {
    try{
        string name = ctx->ID(0)->getText();
        string func_type = ctx->type(0)->getText();
        CFG* cfg = new CFG();
        cfg->label = name;
        cfg_list[name] = cfg;
        BasicBlock* bb = new BasicBlock(cfg, name);
        bb->exit_true = nullptr;
        bb->exit_false = nullptr;
        cfg->add_bb(bb);
        cfg->current_bb = bb;
        current_cfg = cfg;
        BasicBlock * lastBlock = new BasicBlock(cfg,".LLast"+name);
        cfg->lastBlock = lastBlock;
        lastBlock->isLastBlock = true;
        lastBlock->exit_false = nullptr;
        lastBlock->exit_true = nullptr;
        bb->exit_true = lastBlock;
        Type t;
        if (func_type.compare("int") == 0 || func_type.compare("int32_t") == 0) {
            t = Int;
        } else if (func_type.compare("char") == 0) {
            t = Char;
        }
        current_cfg->add_to_symbol_table("!returnval", t, 4);
        int n_params = (ctx->ID()).size()-1;
        current_cfg->set_n_params(n_params);
        vector<PLDCompParser::TypeContext *> type = ctx->type();
        vector<tree::TerminalNode*> list_id = ctx->ID();
        // Parameters of the function are returned in list_id[1] to list[n_params]
        for (int i=1; i<=n_params; i++) {
            string name_var = list_id[i]->getText();
            // We dont care about type this time
            // string t = type[i]->getText();
            bool valid = current_cfg->add_to_symbol_table(name_var,Int, 4);
            if (!valid) {
                InvalidDeclarationException e;
                e.setFileName(filename);
                e.setLine(list_id[i]->getSymbol()->getCharPositionInLine());
                e.setPositionInLine(list_id[i]->getSymbol()->getCharPositionInLine());
                e.setVarName(name_var);
                throw e;
                return NULL;
            }
            current_cfg->add_param(name_var, Int);
        }
        visit(ctx->statementseq());
        return NULL;
    } catch(InvalidDeclarationException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitStatementseq(PLDCompParser::StatementseqContext *ctx) {
    try {
        return visitChildren(ctx);
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitStatement(PLDCompParser::StatementContext *ctx)  {
    try {
        if (current_cfg->current_bb->ret_token <= 0) {
            size_t first = ctx->start->getStartIndex();
            size_t last = ctx->stop->getStopIndex();
            misc::Interval interval(first,last);
            string ctxLine = ctx->start->getInputStream()->getText(interval);
            cerr << "line:" << ctx->getStart()->getLine()
                << ":" << ctx->getStart()->getCharPositionInLine()
                << ": \033[1;31mwarning\033[0m unreachable statement\n \033[0;32m" << ctxLine << "\033[0m" << endl;
            return NULL;
        }
        antlrcpp::Any ret = visitChildren(ctx);
        current_cfg->reset_next_temp();
        return ret;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

 antlrcpp::Any IRGenerator::visitCallstatement(PLDCompParser::CallstatementContext *ctx) {
    try{
        return visitChildren(ctx);
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
 }

antlrcpp::Any IRGenerator::visitIfstatement(PLDCompParser::IfstatementContext *ctx) {
    try{
        vector<string> params;
        // Equal or NotEqual
        if (PLDCompParser::Rel2ExprContext* context =
                dynamic_cast<PLDCompParser::Rel2ExprContext*> (ctx->expr())) {
            string varL = visit(context->expr(0));
            // save number of temporary variables to move back
            int n_temps = 0;
            if (varL.compare("!return_reg") == 0) {
                varL = current_cfg->create_new_tempvar(Int);
                vector<string> cpy_params = {varL,"!return_reg"};
                current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                n_temps++;
            }
            string varR = visit(context->expr(1));
            params.push_back(varL);
            params.push_back(varR);
            IRInstr::Operation op;
            string relop = context->relop->getText();
            if (relop.compare("==") == 0) {
                op = IRInstr::cmp_eq;
            } else if (relop.compare("!=") == 0) {
                op = IRInstr::cmp_ne;
            }
            current_cfg->current_bb->add_IRInstr(op,Int,params);
            current_cfg->move_next_temp(-4*n_temps);
            current_cfg->reset_next_temp();
        }
        // LT, LTE, GT, GTE
        else if (PLDCompParser::Rel1ExprContext* context =
                dynamic_cast<PLDCompParser::Rel1ExprContext*> (ctx->expr())) {
            // save number of temporary variables to move back
            int n_temps = 0;
            string varL = visit(context->expr(0));
            string varR = visit(context->expr(1));
            IRInstr::Operation op;
            string relop = context->relop->getText();
            if (relop.compare("<") == 0 ) {
                op = IRInstr::cmp_lt;
                if (varL.compare("!return_reg") == 0) {
                    varL = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varL,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varL);
                params.push_back(varR);
            } else if (relop.compare(">") == 0) {
                op = IRInstr::cmp_lt;
                if (varR.compare("!return_reg") == 0) {
                    varR = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varR,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varR);
                params.push_back(varL);
            } else if (relop.compare("<=") == 0) {
                op = IRInstr::cmp_le;
                if (varL.compare("!return_reg") == 0) {
                    varL = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varL,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varL);
                params.push_back(varR);
            }
            else if (relop.compare(">=") == 0) {
                op = IRInstr::cmp_le;
                if (varR.compare("!return_reg") == 0) {
                    varR = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varR,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varR);
                params.push_back(varL);
            }
            current_cfg->current_bb->add_IRInstr(op,Int,params);
            //current_cfg->move_next_temp(-4*n_temps);
            current_cfg->reset_next_temp();
        } else {
            string var = visit(ctx->expr());
            params.push_back(var);
            IRInstr::Operation op = IRInstr::cmp;
            current_cfg->current_bb->add_IRInstr(op,Int,params);
            current_cfg->reset_next_temp();
        }
        BasicBlock * testBB = current_cfg->current_bb;

        string afterIfLabel = current_cfg->new_BB_name();
        BasicBlock * afterIfBB = new BasicBlock(current_cfg,afterIfLabel);
        afterIfBB->exit_false = testBB->exit_false;
        afterIfBB->exit_true = testBB->exit_true;

        string thenLabel = current_cfg->new_BB_name();
        BasicBlock * thenBB = new BasicBlock(current_cfg,thenLabel);
        
        thenBB->ret_token = testBB->ret_token;
        testBB->exit_true = thenBB;
        thenBB->exit_true = afterIfBB;
        thenBB->exit_false= nullptr;
        current_cfg->current_bb = thenBB;
        visit(ctx->statementseq(0));
        current_cfg->current_bb = afterIfBB;
        
        if (ctx->statementseq(1)) {
            string elseLable = current_cfg->new_BB_name();
            BasicBlock * elseBB = new BasicBlock(current_cfg,elseLable);
            current_cfg->current_bb = elseBB;
            elseBB->ret_token = testBB->ret_token;
            testBB->exit_false = elseBB;
            elseBB->exit_true = afterIfBB;
            elseBB->exit_false = nullptr;
            visit(ctx->statementseq(1));
            afterIfBB->ret_token = ((thenBB->ret_token+elseBB->ret_token) > 0);
        } else {
            testBB->exit_false = afterIfBB;
        }
        current_cfg->current_bb = afterIfBB;
        return NULL;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitWhilestatement(PLDCompParser::WhilestatementContext *ctx) {
    try {
        BasicBlock * beforeWhile = current_cfg->current_bb;
        BasicBlock * testBB = new BasicBlock(current_cfg,current_cfg->new_BB_name());
        current_cfg->current_bb = testBB;
        
        vector<string> params;
        // Equal or NotEqual
        if (PLDCompParser::Rel2ExprContext* context =
                dynamic_cast<PLDCompParser::Rel2ExprContext*> (ctx->expr())) {
            string varL = visit(context->expr(0));
            // save number of temporary variables to move back
            int n_temps = 0;
            if (varL.compare("!return_reg") == 0) {
                varL = current_cfg->create_new_tempvar(Int);
                vector<string> cpy_params = {varL,"!return_reg"};
                current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                n_temps++;
            }
            string varR = visit(context->expr(1));
            params.push_back(varL);
            params.push_back(varR);
            IRInstr::Operation op;
            string relop = context->relop->getText();
            if (relop.compare("==") == 0) {
                op = IRInstr::cmp_eq;
            } else if (relop.compare("!=") == 0) {
                op = IRInstr::cmp_ne;
            }
            current_cfg->current_bb->add_IRInstr(op,Int,params);
            current_cfg->move_next_temp(-4*n_temps);
            current_cfg->reset_next_temp();
        }
        // LT, LTE, GT, GTE
        else if (PLDCompParser::Rel1ExprContext* context =
                dynamic_cast<PLDCompParser::Rel1ExprContext*> (ctx->expr())) {
            // save number of temporary variables to move back
            int n_temps = 0;
            string varL = visit(context->expr(0));
            string varR = visit(context->expr(1));
            IRInstr::Operation op;
            string relop = context->relop->getText();
            if (relop.compare("<") == 0 ) {
                op = IRInstr::cmp_lt;
                if (varL.compare("!return_reg") == 0) {
                    varL = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varL,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varL);
                params.push_back(varR);
            } else if (relop.compare(">") == 0) {
                op = IRInstr::cmp_lt;
                if (varR.compare("!return_reg") == 0) {
                    varR = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varR,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varR);
                params.push_back(varL);
            } else if (relop.compare("<=") == 0) {
                op = IRInstr::cmp_le;
                if (varL.compare("!return_reg") == 0) {
                    varL = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varL,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varL);
                params.push_back(varR);
            }
            else if (relop.compare(">=") == 0) {
                op = IRInstr::cmp_le;
                if (varR.compare("!return_reg") == 0) {
                    varR = current_cfg->create_new_tempvar(Int);
                    vector<string> cpy_params = {varR,"!return_reg"};
                    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
                    n_temps++;
                }
                params.push_back(varR);
                params.push_back(varL);
            }
            current_cfg->current_bb->add_IRInstr(op,Int,params);
            current_cfg->move_next_temp(-4*n_temps);
            current_cfg->reset_next_temp();
        } else {
            string var = visit(ctx->expr());
            params.push_back(var);
            IRInstr::Operation op = IRInstr::cmp;
            current_cfg->current_bb->add_IRInstr(op,Int,params);
            current_cfg->reset_next_temp();
        }

        BasicBlock * bodyBB = new BasicBlock(current_cfg,current_cfg->new_BB_name());
        
        BasicBlock * afterWhile = new BasicBlock(current_cfg,current_cfg->new_BB_name());
        testBB->exit_true = bodyBB;
        testBB->exit_false = afterWhile;

        afterWhile->exit_true = beforeWhile->exit_true;
        afterWhile->exit_false = beforeWhile->exit_false;
        
        bodyBB->exit_true = testBB;
        bodyBB->exit_false = nullptr;

        beforeWhile->exit_true = testBB;

        current_cfg->current_bb = bodyBB;
        visit(ctx->statementseq());
        current_cfg->current_bb = afterWhile;
        return NULL;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) {
    try{
        if (current_cfg->current_bb->ret_token <= 0) {
            return NULL;
        } else {
            string var = visit(ctx->expr());
            if (!current_cfg->find_symbol(var)) {
                VarNotFoundException e;
                e.setVar(var);
                e.setFileName(filename);
                e.setLine(ctx->getStart()->getLine());
                e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
                throw e;
                return NULL;
            }
            current_cfg->current_bb->ret_token -= 1;
            vector<string> params = {"!returnval",var};
            vector<string> ret_params = {"!returnval"};
            current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,params);
            current_cfg->current_bb->add_IRInstr(IRInstr::ret,Int,params);
            current_cfg->reset_next_temp();
            return var;
        }
    } catch(VarNotFoundException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitCall(PLDCompParser::CallContext *ctx) {
    try{
        vector<PLDCompParser::ExprContext *> list_expr = ctx->expr();
        vector<string> params;
        params.push_back(ctx->ID()->getText());
        int n_params = list_expr.size();
        int n_temps = 0;
        for (int i=0; i<n_params; i++) {
            string var = visit(ctx->expr(i));
            if (var.substr(0,4).compare("!tmp") == 0) {
                n_temps++;
            }
            if (var.compare("!return_reg") == 0) {
                //current_cfg->move_next_temp(4);
                n_temps++;
                var = current_cfg->create_new_tempvar(Int);
                vector<string> cpy_params = {var,"!return_reg"};
                current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,cpy_params);
            }
            params.push_back(var);
        }
        current_cfg->current_bb->add_IRInstr(IRInstr::call,Int,params);
        current_cfg->move_next_temp(-4*n_temps);
        return NULL;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

// Expression

antlrcpp::Any IRGenerator::visitCompoundassignment(PLDCompParser::CompoundassignmentContext *ctx) {
    string var;
    if (ctx->ID()!=nullptr) {
        var = ctx->ID()->getText();
    }
    IRInstr::Operation op;
    string opstring = ctx->op->getText();
    string expr = visit(ctx->expr());
    if (opstring.compare("+=")==0) {
        op = IRInstr::add;
    } else if (opstring.compare("-=")==0) {
        op = IRInstr::sub;
    } else if (opstring.compare("*=")==0) {
        op = IRInstr::mul;
    } else if (opstring.compare("/=")==0) {
        op = IRInstr::div;
    } else if (opstring.compare("%=")==0) {
        op = IRInstr::mod;
    } else if (opstring.compare("|=")==0) {
        op = IRInstr::orb;
    } else if (opstring.compare("&=")==0) {
        op = IRInstr::andb;
    } else if (opstring.compare("^=")==0) {
        op = IRInstr::xorb;
    }
    current_cfg->current_bb->add_IRInstr(op,Int,{var,var,expr});
    cout << var << endl;
    return var;
}
antlrcpp::Any IRGenerator::visitIncr_decr(PLDCompParser::Incr_decrContext *ctx) {
    string var;
    if (ctx->ID()!=nullptr) {
        var = ctx->ID()->getText();
    } else {
        //TODO: same thing for array
    }
    string temp1 = current_cfg->create_new_tempvar(Int);
    vector<string> params_const1 = {temp1,to_string(1)};
    current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params_const1);
    IRInstr::Operation op;
    string opstring = ctx->incr_decr_op()->getText();
    if (opstring.compare("++")==0) {
        op = IRInstr::add;
    } else if (opstring.compare("--")==0) {
        op = IRInstr::sub;
    }
    vector<string> params_add = {var,var,temp1};
    current_cfg->current_bb->add_IRInstr(op,Int,params_add);
    current_cfg->move_next_temp(-4);
    return var;
}

antlrcpp::Any IRGenerator::visitArrayExpr(PLDCompParser::ArrayExprContext *ctx) {
    try{
        string var = current_cfg->create_new_tempvar(Int);
        string expr = visit(ctx->array());
        vector<string> params = {var,expr};
        current_cfg->current_bb->add_IRInstr(IRInstr::rmem,Int,params);
        return var;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitCallExpr(PLDCompParser::CallExprContext *ctx) {
    try{
        visit(ctx->call());
        return (string)("!return_reg");
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}
antlrcpp::Any IRGenerator::visitConst(PLDCompParser::ConstContext *ctx) {
    try {
        string var = current_cfg->create_new_tempvar(Int);
        vector<string> params = {var,ctx->INT()->getText()};
        current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params);
        return var;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitNegConst(PLDCompParser::NegConstContext *ctx) {
    try{
        string var = current_cfg->create_new_tempvar(Int);
        vector<string> params = {var,("-"+ctx->INT()->getText())};
        current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params);
        return var;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitCharConst(PLDCompParser::CharConstContext *ctx) {
    try{
        string var = current_cfg->create_new_tempvar(Char);
        vector<string> params;
        params.push_back(var);
        string charstring = ctx->getText();
        char c;
        if (charstring.at(1) != '\\') {
            c = charstring.at(1); 
        } else {
            switch (charstring.at(2))
            {
                case 'n':
                    c = '\n';
                    break;
                case '\\':
                    c = '\\';
                    break;
                case 'r':
                    c = '\r';
                    break;
                case '0':
                    c = '\0';
                    break;
                default:
                    break;
            }
        }
        params.push_back(to_string((int)c));
        current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Char,params);
        return var;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitPar(PLDCompParser::ParContext *ctx) {
    try {
        string var = visit(ctx->expr());
        return var;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitVar(PLDCompParser::VarContext *ctx) {
    try{
        string name = ctx->ID()->getText();
        if (current_cfg->find_symbol(name)) {
            return (string)name;
        } else {
            VarNotFoundException e;
            e.setVar(name);
            e.setFileName(filename);
            e.setLine(ctx->getStart()->getLine());
            e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
            throw e;
        }
        return (string)(ctx->ID()->getText());
    } catch(VarNotFoundException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitNegExpr(PLDCompParser::NegExprContext *ctx) {
    try {
        string var = visit(ctx->expr());
        //current_cfg->move_next_temp(4);
        string temp = current_cfg->create_new_tempvar(Int);
        vector<string> params = {temp,"0"};
        current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params);
        params = {var,temp,var};
        current_cfg->current_bb->add_IRInstr(IRInstr::sub,Int,params);
        current_cfg->move_next_temp(-4);
        return var;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) {
    try{
        int address = current_cfg->get_current_address();
        string var1 = visit(ctx->expr(0));
        string var2 = visit(ctx->expr(1));
        if (var1.substr(0,4).compare("!tmp") == 0) {
            current_cfg->move_next_temp(-4);
        }

        if (var2.substr(0,4).compare("!tmp") == 0) {
            current_cfg->move_next_temp(-4);
        }
        
        string var3 = current_cfg->create_new_tempvar(Int);
        vector<string> params = {var3, var1, var2};
        IRInstr::Operation op;
        if (ctx->op->getText().compare("*") == 0) {
            op = IRInstr::mul;
        } else if (ctx->op->getText().compare("/") == 0){
            op = IRInstr::div;
        } else if (ctx->op->getText().compare("%") == 0){
            op = IRInstr::mod;
        }
        current_cfg->current_bb->add_IRInstr(op,Int,params);
        return var3;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) {
    try{
        string var1 = visit(ctx->expr(0));
        string var2 = visit(ctx->expr(1));
        if (var1.substr(0,4).compare("!tmp") == 0) {
            current_cfg->move_next_temp(-4);
        }

        if (var2.substr(0,4).compare("!tmp") == 0) {
            current_cfg->move_next_temp(-4);
        }
        
        string var3 = current_cfg->create_new_tempvar(Int);
        vector<string> params = {var3, var1, var2};
        IRInstr::Operation op;
        if (ctx->op->getText().compare("+") == 0) {
            op = IRInstr::add;
        } else if (ctx->op->getText().compare("-") == 0) {
            op = IRInstr::sub;
        }
        current_cfg->current_bb->add_IRInstr(op,Int,params);
        return var3;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitShiftOp(PLDCompParser::ShiftOpContext *ctx) {
        try{
        string var1 = visit(ctx->expr(0));
        string var2 = visit(ctx->expr(1));
        if (var1.substr(0,4).compare("!tmp") == 0) {
            current_cfg->move_next_temp(-4);
        }

        if (var2.substr(0,4).compare("!tmp") == 0) {
            current_cfg->move_next_temp(-4);
        }
        
        string var3 = current_cfg->create_new_tempvar(Int);
        vector<string> params = {var3, var1, var2};
        IRInstr::Operation op;
        cout << ctx->op->getText() << endl;
        if (ctx->op->getText().compare(">>") == 0) {
            op = IRInstr::rshift;
        } else if (ctx->op->getText().compare("<<") == 0) {
            op = IRInstr::lshift;
        }
        current_cfg->current_bb->add_IRInstr(op,Int,params);
        return var3;
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

//TODO
antlrcpp::Any IRGenerator::visitRel1Expr(PLDCompParser::Rel1ExprContext *ctx) {
    string var1 = visit(ctx->expr(0));
    string var2 = visit(ctx->expr(1));
    string var3 = current_cfg->create_new_tempvar(Int);

    string opstring = ctx->relop->getText();
    string type_flag;
    if (opstring.compare(">")==0) {
        type_flag = "g";
    } else if (opstring.compare("<")==0) {
        type_flag = "l";
    } else if (opstring.compare(">=")==0) {
        type_flag = "ge";
    } else if (opstring.compare("<=")==0) {
        type_flag = "le";
    }
    current_cfg->current_bb->add_IRInstr(IRInstr::getflag,Int,{type_flag,var3,var1,var2});
    return var3;
}

antlrcpp::Any IRGenerator::visitRel2Expr(PLDCompParser::Rel2ExprContext *ctx) {
    string var1 = visit(ctx->expr(0));
    string var2 = visit(ctx->expr(1));
    string var3 = current_cfg->create_new_tempvar(Int);

    string opstring = ctx->relop->getText();
    string type_flag;
    if (opstring.compare("==")==0) {
        type_flag = "e";
    } else if (opstring.compare("!=")==0) {
        type_flag = "ne";
    } 
    current_cfg->current_bb->add_IRInstr(IRInstr::getflag,Int,{type_flag,var3,var1,var2});
    return var3;
}

antlrcpp::Any IRGenerator::visitBitwiseAnd(PLDCompParser::BitwiseAndContext *ctx) {
    string var1= visit(ctx->expr(0));
    string var2= visit(ctx->expr(1));
     if (var1.substr(0,4).compare("!tmp") == 0) {
        current_cfg->move_next_temp(-4);
    }

    if (var2.substr(0,4).compare("!tmp") == 0) {
        current_cfg->move_next_temp(-4);
    }
    string var3 = current_cfg->create_new_tempvar(Int);
    current_cfg->current_bb->add_IRInstr(IRInstr::andb,Int,{var3,var1,var2});
    return var3;
}

antlrcpp::Any IRGenerator::visitBitwiseXor(PLDCompParser::BitwiseXorContext *ctx) {
    string var1= visit(ctx->expr(0));
    string var2= visit(ctx->expr(1));
    if (var1.substr(0,4).compare("!tmp") == 0) {
        current_cfg->move_next_temp(-4);
    }
    if (var2.substr(0,4).compare("!tmp") == 0) {
        current_cfg->move_next_temp(-4);
    }
    string var3 = current_cfg->create_new_tempvar(Int);
    current_cfg->current_bb->add_IRInstr(IRInstr::xorb,Int,{var3,var1,var2});
    return var3;
}

antlrcpp::Any IRGenerator::visitBitwiseOr(PLDCompParser::BitwiseOrContext *ctx) {
    string var1= visit(ctx->expr(0));
    string var2= visit(ctx->expr(1));
     if (var1.substr(0,4).compare("!tmp") == 0) {
        current_cfg->move_next_temp(-4);
    }
    if (var2.substr(0,4).compare("!tmp") == 0) {
        current_cfg->move_next_temp(-4);
    }
    string var3 = current_cfg->create_new_tempvar(Int);
    current_cfg->current_bb->add_IRInstr(IRInstr::orb,Int,{var3,var1,var2});
    return var3;
}

antlrcpp::Any IRGenerator::visitLogicalAnd(PLDCompParser::LogicalAndContext *ctx) {
    return NULL;
}

antlrcpp::Any IRGenerator::visitLogicalOr(PLDCompParser::LogicalOrContext *ctx) {
    return NULL;
}
// Variable declaration
antlrcpp::Any IRGenerator::visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx) {
    try{
        int n_id = (ctx->ID()).size();
        for (int i=0; i<n_id; i++) {
            string name = ctx->ID(i)->getText();
            string type = ctx->type()->getText();
            Type t;
            if (type.compare("int") == 0 || type.compare("int32_t") == 0 ) {
                t = Int;
            } else if (type.compare("char") == 0) {
                t = Char;
            }
            bool validDeclaration = current_cfg->add_to_symbol_table(name,t,4);
            if (!validDeclaration) {
                InvalidDeclarationException e;
                e.setFileName(filename);
                e.setLine(ctx->getStart()->getLine());
                e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
                e.setVarName(name);
                throw e;
            }
        }
        current_cfg->reset_next_temp();
        return NULL;
    } catch(InvalidDeclarationException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}


antlrcpp::Any IRGenerator::visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) {
    try{
        string name = ctx->ID()->getText();
        string type = ctx->type()->getText();
        Type t;
        if (type.compare("int") == 0 || type.compare("int32_t") == 0) {
            t = Int;
        } else if (type.compare("char") == 0) {
            t = Char;
        }
        bool validDeclaration = current_cfg->add_to_symbol_table(name,t,4);
        if (!validDeclaration) {
            InvalidDeclarationException e;
            e.setFileName(filename);
            e.setLine(ctx->getStart()->getLine());
            e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
            e.setVarName(name);
            throw e;
            return NULL;
        }
        string temp = visit(ctx->expr());
        vector<string> params = {name, temp};
        current_cfg->current_bb->add_IRInstr(IRInstr::cpy,t,params);
        current_cfg->reset_next_temp();
        return NULL;
    } catch(InvalidDeclarationException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitDeclArray(PLDCompParser::DeclArrayContext *ctx) {
    try{
        string name = ctx->ID()->getText();
        string type = ctx->type()->getText();
        Type t;
        if (type.compare("int") == 0 || type.compare("int32_t") == 0) {
            t = IntArray;
        } else if (type.compare("char") == 0) {
            t = CharArray;
        }
        int size = stoi(ctx->INT()->getText());
        bool validDeclaration = current_cfg->add_to_symbol_table(name,t,4*size);
        if (!validDeclaration) {
            InvalidDeclarationException e;
            e.setFileName(filename);
            e.setLine(ctx->getStart()->getLine());
            e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
            e.setVarName(name);
            throw e;
            return NULL;
        }
        int index = current_cfg->get_var_index(name);
        vector<PLDCompParser::ExprContext *> list_expr = ctx->expr();
        int n_expr = list_expr.size();
        string mem = current_cfg->create_new_tempvar(Int);
        vector<string> params_mem = {mem,to_string(-index)};
        current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params_mem);
        string offset = current_cfg->create_new_tempvar(Int);
        vector<string> params_offset = {offset,to_string(4)};
        current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params_offset);
        vector<string> params_increase = {mem,offset,mem};
        for (int i=0; i<n_expr; i++) {
            string expr = visit(list_expr[i]);
            vector<string> params_wmem = {mem,expr};
            current_cfg->current_bb->add_IRInstr(IRInstr::wmem,Int,params_wmem); 
            if (i<n_expr-1) {
                current_cfg->current_bb->add_IRInstr(IRInstr::add,Int,params_increase);       
            }
        }
        return NULL;
    } catch(InvalidDeclarationException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}
// Assignment
antlrcpp::Any IRGenerator::visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) {
    try{
        string var = visit(ctx->lvalue());
        if (var.compare("")==0) {
            VarNotFoundException e;
            e.setVar(ctx->lvalue()->getText());
            e.setFileName(filename);
            e.setLine(ctx->getStart()->getLine());
            e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
            throw e;
            return NULL;
        }

        string temp = visit(ctx->expr());
        // if var is an actual variable
        if (var.at(0) != '!') {
            vector<string> params = {var, temp};
            current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,params);
        } else {
            vector<string> params = {var, temp};
            current_cfg->current_bb->add_IRInstr(IRInstr::wmem,Int,params);
        }
        
        current_cfg->reset_next_temp();
        return NULL;

    } catch(VarNotFoundException vnfe) {
        vnfe.what();
        cerr <<  "Compilation failed!" << endl << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitIdL(PLDCompParser::IdLContext *ctx) {
    try{
        string name = ctx->ID()->getText();
        if (!current_cfg->find_symbol(name)){
            VarNotFoundException e;
            e.setVar(name);
            e.setFileName(filename);
            e.setLine(ctx->getStart()->getLine());
            e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
            throw e;
            return "";
        }
        return name;
    } catch(VarNotFoundException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitArrayL(PLDCompParser::ArrayLContext *ctx) {
    try {
        string var = visit(ctx->array());
        return var;
    } catch (exception& e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}

antlrcpp::Any IRGenerator::visitArray(PLDCompParser::ArrayContext *ctx) {
    try{
        string name = ctx->ID()->getText();
        if (current_cfg->find_symbol(name)) {
            cout << name << endl;
            if (current_cfg->get_var_type(name)!=CharArray 
                && current_cfg->get_var_type(name)!=IntArray){
                ArrayException e;
                e.setArrayName(name);
                e.setFileName(filename);
                e.setLine(ctx->getStart()->getLine());
                e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
                throw e;
                return "";
            }
            int mem = current_cfg->get_var_index(name);
            string expr = visit(ctx->expr());
            
            string var = current_cfg->create_new_tempvar(Int);
            vector<string> params1 = {var,to_string(-mem)};
            current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params1);
            string temp4 = current_cfg->create_new_tempvar(Int);
            vector<string> params_load4 = {temp4,to_string(4)};
            current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params_load4);
            
            string offset = current_cfg->create_new_tempvar(Int);
            vector<string> params_mul = {offset,expr,temp4};
            current_cfg->current_bb->add_IRInstr(IRInstr::mul,Int,params_mul);
            vector<string> params2 = {var, offset, var};
            current_cfg->current_bb->add_IRInstr(IRInstr::add,Int,params2);
            return var;
        } else {
            VarNotFoundException e;
            e.setVar(name);
            e.setFileName(filename);
            e.setLine(ctx->getStart()->getLine());
            e.setPositionInLine(ctx->getStart()->getCharPositionInLine());
            throw e;
            return "";
        }
    } catch(ArrayException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    } catch(VarNotFoundException e) {
        e.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}

// Type
antlrcpp::Any IRGenerator::visitType(PLDCompParser::TypeContext *ctx) {
    try{
        return visitChildren(ctx);
    } catch (exception& e) {
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl << endl;
        exit(1);
    }
}

