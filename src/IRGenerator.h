// IR code generator

#pragma once

#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include "IR.h"
#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"

class IRGenerator : public PLDCompBaseVisitor {
public:
    IRGenerator(tree::ParseTree* ast) : cfg(ast) {}
    antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx) override;
    antlrcpp::Any visitDeclaration(PLDCompParser::DeclarationContext *ctx) override;
    antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *ctx) override;
    antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx) override;
    antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) override;
    antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx) override;
    antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) override;
    antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override;
    antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx) override;
    antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx) override;
    antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) override;
    antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override;
    antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) override;
    antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx) override;
    antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx) override;
    antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx) override;
private:
    CFG* cfg;
}