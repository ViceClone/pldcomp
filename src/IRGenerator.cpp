#include "IRGenerator.h"
#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include "IR.h"
using namespace std;
using namespace antlr4;

antlrcpp::Any IRGenerator::visitProg(PLDCompParser::ProgContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitDeclaration(PLDCompParser::DeclarationContext *ctx) {
    string name = ctx->ID()->getText();
    CFG* cfg = new CFG();
    cfg_list[name] = cfg;
    BasicBlock* bb = new BasicBlock(cfg, name);
    cfg->add_bb(bb);
    cfg->current_bb = bb;
    current_cfg = cfg;
    visit(ctx->statementseq());
    return NULL;
}

antlrcpp::Any IRGenerator::visitStatementseq(PLDCompParser::StatementseqContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitStatement(PLDCompParser::StatementContext *ctx)  {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) {
    string var = visit(ctx->expr());
    return var;
}


// Expression
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

antlrcpp::Any IRGenerator::visitPar(PLDCompParser::ParContext *ctx) {
    string var = visit(ctx->expr());
    return var;
}

antlrcpp::Any IRGenerator::visitVar(PLDCompParser::VarContext *ctx) {
    return (string)(ctx->ID()->getText());
}

antlrcpp::Any IRGenerator::visitNegExpr(PLDCompParser::NegExprContext *ctx) {
    string var = visit(ctx->expr());
    string temp = current_cfg->create_new_tempvar(Int);
    vector<string> params = {temp,"0"};
    current_cfg->current_bb->add_IRInstr(IRInstr::ldconst,Int,params);
    params = {var,temp,var};
    current_cfg->current_bb->add_IRInstr(IRInstr::sub,Int,params);
    return var;
}

antlrcpp::Any IRGenerator::visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) {
    string var1 = visit(ctx->expr(0));
    string var2 = visit(ctx->expr(1));
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
    string var1 = visit(ctx->expr(0));
    string var2 = visit(ctx->expr(1));
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
        cout << "ERROR: variable has been declared yet" << endl;
    }
    return NULL;
}
// Type
antlrcpp::Any IRGenerator::visitType(PLDCompParser::TypeContext *ctx) {
    return visitChildren(ctx);
}

// TODO: current memory address