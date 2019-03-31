#include "IRGenerator.h"
#include "IR.h"
using namespace std;
using namespace antlr4;

IRGenerator::IRGenerator(tree::ParseTree* ast) {
    this->ast = ast;
}

antlrcpp::Any IRGenerator::visitProg(PLDCompParser::ProgContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitDeclaration(PLDCompParser::DeclarationContext *ctx) {
    string name = ctx->ID()->getText();
    CFG* cfg = new CFG();
    cfg_list[name] = cfg;
    visit(ctx->statementseq());
    return NULL;
}

antlrcpp::Any IRGenerator::visitStatement(PLDCompParser::StatementContext *ctx)  {
    return visitChildren(ctx);
}

antlrcpp::Any IRGenerator::visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) {
    return visitChildren(ctx);
}
