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

antlrcpp::Any IRGenerator::visitStatement(PLDCompParser::StatementContext *ctx)  {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) {
    string var = visit(ctx->expr());
    return var;
}

antlrcpp::Any IRGenerator::visitPar(PLDCompParser::ParContext *ctx) {
    string var = visit(ctx->expr());
    return var;
}

antlrcpp::Any IRGenerator::visitCall(PLDCompParser::CallContext *ctx){
    //ceci ne suporte pas le passage d'expressions
    vector<string> params;
    //le nom de la fonction est dans la premiere place du vecteur 
    params.add(ctx->ID());
    List<expr> expressions = ctx.expr()
                    .stream()
                    .map(expr -> expr.accept(exprVisitor))
                    .collect(toList());
    if(expressions.size()<=6){
        for(int i=0;i<expressions.size();i++){
            params.add(visit(expr(i)));
        }
    }else{
        //error too many parameters
    }
    current_cfg->current_bb->add_IRInstr(IRInstr::call,Int,params);
}

antlrcpp::Any IRGenerator::visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) {
    string var1 = visit(ctx->expr(0));
    string var2 = visit(ctx->expr(1));
    string var3 = current_cfg->create_new_tempvar(Int);
    vector<string> params = {var3, var1, var2};
    current_cfg->current_bb->add_IRInstr(IRInstr::mul,Int,params);
    return var3;
}
