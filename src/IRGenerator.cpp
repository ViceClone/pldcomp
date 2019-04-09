#include "IRGenerator.h"
#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include "PLDCompParser.h"
#include "misc/Interval.h"
#include "IR.h"
using namespace std;
using namespace antlr4;

void IRGenerator::output_asm(ostream& o) {
    cout << "--------------------OUTPUT TO OUT.ASM--------" << endl;
    o << ".text" << endl << endl;
    for (auto it=cfg_list.begin();it!=cfg_list.end();++it) {
        it->second->gen_asm(o);
    }
    cout << "--------------------END OUTPUT TO OUT.ASM--------" << endl;
}

antlrcpp::Any IRGenerator::visitProg(PLDCompParser::ProgContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitFunctiondefinition(PLDCompParser::FunctiondefinitionContext *ctx) {
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
    if (func_type.compare("int") == 0) {
        current_cfg->add_to_symbol_table("!returnval", Int);
    }
    // Can merge with visitFuncNoParams -> TODO
    int n_params = (ctx->ID()).size()-1;
    current_cfg->set_n_params(n_params);
    vector<PLDCompParser::TypeContext *> type = ctx->type();
    vector<tree::TerminalNode*> list_id = ctx->ID();
    // Parameters of the function are returned in list_id[1] to list[n_params]
    for (int i=1; i<=n_params; i++) {
        string name_var = list_id[i]->getText();
        // We dont care about type this time
        // string t = type[i]->getText();
        bool valid = current_cfg->add_to_symbol_table(name_var,Int);
        if (!valid) {
            cout << "ERROR: Variable name " << name_var <<  " is redundant";
            return NULL;
        }
        current_cfg->add_param(name_var, Int);
    }
    visit(ctx->statementseq());
    return NULL;
}

antlrcpp::Any IRGenerator::visitStatementseq(PLDCompParser::StatementseqContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitStatement(PLDCompParser::StatementContext *ctx)  {
    if (current_cfg->current_bb->ret_token <= 0) {
        size_t first = ctx->start->getStartIndex();
        size_t last = ctx->stop->getStopIndex();
        misc::Interval interval(first,last);
        string ctxLine = ctx->start->getInputStream()->getText(interval);
        cout << "line:" << ctx->getStart()->getLine()
            << ":" << ctx->getStart()->getCharPositionInLine()
            << ": \033[1;31mwarning\033[0m unreachable statement\n \033[0;32m" << ctxLine << "\033[0m" << endl;
        return NULL;
    }
    antlrcpp::Any ret = visitChildren(ctx);
    current_cfg->reset_next_temp();
    return ret;
}

 antlrcpp::Any IRGenerator::visitCallstatement(PLDCompParser::CallstatementContext *ctx) {
    return visitChildren(ctx);
 }

antlrcpp::Any IRGenerator::visitIfstatement(PLDCompParser::IfstatementContext *ctx) {
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
}

antlrcpp::Any IRGenerator::visitForstatement(PLDCompParser::ForstatementContext *ctx){
    cout << "Generate FOR" << endl;
    BasicBlock * beforeWhile = current_cfg->current_bb;
    BasicBlock * testBB = new BasicBlock(current_cfg,current_cfg->new_BB_name());
    cout << "New block: " << testBB->label << endl;
    current_cfg->current_bb = testBB;
    
    string temp = visit(ctx->assignmentstat(0));

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
        cout << "HERE" << endl;
        int n_temps = 0;
        string varL = visit(context->expr(0));
        string varR = visit(context->expr(1));
        IRInstr::Operation op;
        string relop = context->relop->getText();
        if (relop.compare("<") == 0 ) {
            op = IRInstr::cmp_lt;
            cout << "here2" << endl;
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
    visit(ctx->assignmentstat(1));
    current_cfg->current_bb = afterWhile;
    return NULL;
}

antlrcpp::Any IRGenerator::visitWhilestatement(PLDCompParser::WhilestatementContext *ctx) {
    cout << "Generate WHILE" << endl;
    BasicBlock * beforeWhile = current_cfg->current_bb;
    BasicBlock * testBB = new BasicBlock(current_cfg,current_cfg->new_BB_name());
    cout << "New block: " << testBB->label << endl;
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
        cout << "HERE" << endl;
        int n_temps = 0;
        string varL = visit(context->expr(0));
        string varR = visit(context->expr(1));
        IRInstr::Operation op;
        string relop = context->relop->getText();
        if (relop.compare("<") == 0 ) {
            op = IRInstr::cmp_lt;
            cout << "here2" << endl;
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
}

antlrcpp::Any IRGenerator::visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) {
    if (current_cfg->current_bb->ret_token <= 0) {
        return NULL;
    } else {
        string var = visit(ctx->expr());
        /*
        if (var.compare("!return_reg") == 0) {
            return var;
        }
        */
        if (!current_cfg->find_symbol(var)) {
            // TODO: Exception
            cout << "ERROR: " << var << " has not been declared yet " << endl;
            return NULL;
        }
        current_cfg->current_bb->ret_token -= 1;
        vector<string> params = {"!returnval",var};
        vector<string> ret_params = {"!returnval"};
        current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,params);
        //cout << "ret" << endl;
        // current_cfg->current_bb->isReturn = true;
        current_cfg->current_bb->add_IRInstr(IRInstr::ret,Int,params);
        current_cfg->reset_next_temp();
        return var;
    }

    
}

antlrcpp::Any IRGenerator::visitCall(PLDCompParser::CallContext *ctx) {
    vector<PLDCompParser::ExprContext *> list_expr = ctx->expr();
    vector<string> params;
    params.push_back(ctx->ID()->getText());
    int n_params = list_expr.size();
    //cout << "Current address1: " << current_cfg->get_current_address() << endl;
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
    //cout << "Current address2: " << current_cfg->get_current_address() << endl;
    return NULL;
}

// Expression

antlrcpp::Any IRGenerator::visitCallExpr(PLDCompParser::CallExprContext *ctx) {
    visit(ctx->call());
    return (string)("!return_reg");
}
antlrcpp::Any IRGenerator::visitConst(PLDCompParser::ConstContext *ctx) {
    string var = current_cfg->create_new_tempvar(Int);
    vector<string> params = {var,ctx->INT()->getText()};
    current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params);
    return var;
}

antlrcpp::Any IRGenerator::visitNegConst(PLDCompParser::NegConstContext *ctx) {
    string var = current_cfg->create_new_tempvar(Int);
    vector<string> params = {var,("-"+ctx->INT()->getText())};
    current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params);
    return var;
}

antlrcpp::Any IRGenerator::visitCharConst(PLDCompParser::CharConstContext *ctx) {
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
            default:
                break;
        }
    }
    params.push_back(to_string((int)c));
    current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Char,params);
    return var;
}

antlrcpp::Any IRGenerator::visitPar(PLDCompParser::ParContext *ctx) {
    string var = visit(ctx->expr());
    return var;
}

antlrcpp::Any IRGenerator::visitVar(PLDCompParser::VarContext *ctx) {
    string name = ctx->ID()->getText();
    if (current_cfg->find_symbol(name)) {
        return (string)name;
    } else {
        // TODO: throw exception here
        cout << "Variable \'" << name << "\' has not been declared yet " << endl;
    }
    return (string)(ctx->ID()->getText());
}

antlrcpp::Any IRGenerator::visitNegExpr(PLDCompParser::NegExprContext *ctx) {
    string var = visit(ctx->expr());
    //current_cfg->move_next_temp(4);
    string temp = current_cfg->create_new_tempvar(Int);
    vector<string> params = {temp,"0"};
    current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params);
    params = {var,temp,var};
    current_cfg->current_bb->add_IRInstr(IRInstr::sub,Int,params);
    current_cfg->move_next_temp(-4);
    return var;
}

antlrcpp::Any IRGenerator::visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) {
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
    }
    current_cfg->current_bb->add_IRInstr(op,Int,params);
    return var3;
}

antlrcpp::Any IRGenerator::visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) {
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
    if (ctx->op->getText().compare("+") == 0) {
        op = IRInstr::add;
    } else if (ctx->op->getText().compare("-") == 0) {
        op = IRInstr::sub;
    }
    current_cfg->current_bb->add_IRInstr(op,Int,params);
    return var3;
}

//TODO
antlrcpp::Any IRGenerator::visitRel1Expr(PLDCompParser::Rel1ExprContext *ctx) {
    return NULL;
}

antlrcpp::Any IRGenerator::visitRel2Expr(PLDCompParser::Rel2ExprContext *ctx) {
    return NULL;
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
    string name = ctx->ID()->getText();
    string type = ctx->type()->getText();
    Type t;
    if (type.compare("int") == 0) {
        t = Int;
    }
    bool validDeclaration = current_cfg->add_to_symbol_table(name,t);
    if (!validDeclaration) {
        cout << "ERROR: invalid declaration " << endl;
    }
    current_cfg->reset_next_temp();
    return NULL;
}


antlrcpp::Any IRGenerator::visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) {
    string name = ctx->ID()->getText();
    string type = ctx->type()->getText();
    Type t;
    if (type.compare("int") == 0) {
        t = Int;
    }
    bool validDeclaration = current_cfg->add_to_symbol_table(name,t);
    if (!validDeclaration) {
        cout << "ERROR: invalid declaration " << endl;
        return NULL;
    }
    string temp = visit(ctx->expr());
    vector<string> params = {name, temp};
    current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,params);
    current_cfg->reset_next_temp();
    return NULL;
}

// Assignment
antlrcpp::Any IRGenerator::visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) {
    string name = ctx->ID()->getText();
    if (current_cfg->find_symbol(name)) {
        string temp = visit(ctx->expr());
        vector<string> params = {name, temp};
        current_cfg->current_bb->add_IRInstr(IRInstr::cpy,Int,params);
    } else {
        cout << "ERROR: variable has not been declared yet" << endl;
    }
    current_cfg->reset_next_temp();
    return NULL;
}
// Type
antlrcpp::Any IRGenerator::visitType(PLDCompParser::TypeContext *ctx) {
    return visitChildren(ctx);
}

