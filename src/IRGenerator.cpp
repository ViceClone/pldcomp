#include "IRGenerator.h"
#include "IR.h"
using namespace std;
using namespace antlr4;

IRGenerator::IRGenerator() {
    cfg = new CFG();
}

IRGenerator::IRGenerator(tree::ParseTree* ast) {
    cfg = new CFG(ast);
    cfg->current_bb = nullptr;
}

antlrcpp::Any IRGenerator::visitProg(PLDCompParser::ProgContext *ctx) {
    string bbName = cfg->new_BB_name();
    BasicBlock* bb = new BasicBlock(cfg, bbName);
    add_bb(bb);
    cfg->current_bb = bb;
    visit(ctx->declaration());
    return NULL;
}

antlrcpp::Any IRGenerator::visitDeclaration(PLDCompParser::DeclarationContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitStatement(PLDCompParser::StatementContext *ctx)  {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) {
    string expr = visit(ctx->expr());
    vector<string> params{"rax", expr};
    cfg->current_bb->add_IRInstr(IRInstr::rmem, Int, params);
    return NULL;
}
