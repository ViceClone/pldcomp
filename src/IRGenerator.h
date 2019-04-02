// IR code generator

#pragma once

#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include "IR.h"

using namespace std;
using namespace antlr4;

class IRGenerator : public PLDCompBaseVisitor {
public:
    IRGenerator() {}
    antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx);
    antlrcpp::Any visitDeclaration(PLDCompParser::DeclarationContext *ctx);
    // antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *ctx);
    antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx);
<<<<<<< HEAD
    antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx);
    antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx);
    antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) override;
    antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override;
    antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx);
    antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx) override;
    antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) override;
    antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override;
    antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) override;
    antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx) override;
    antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx) override;
    antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx) override;
=======
    // antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) override;
    // antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx) override;
    // antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) override;
    antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override;
    // antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx) override;
    // antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx) override;
    // antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) override;
    // antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override;
    // antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) override;
    // antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx) override;
    // antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx) override;
    // antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx) override;
>>>>>>> 3d526519ae6e63b4620c73f135ece66eac905a89
private:
    map<string,CFG*> cfg_list;
    CFG* current_cfg;
    tree::ParseTree* ast;
};