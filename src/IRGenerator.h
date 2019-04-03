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
    void output_asm(ostream& o);
    antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx);
    antlrcpp::Any visitFuncNoParams(PLDCompParser::FuncNoParamsContext *ctx);
    antlrcpp::Any visitFuncWithParams(PLDCompParser::FuncWithParamsContext *ctx);
    antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *ctx);
    antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx);
    antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx);
    antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx);
    antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) ;
    antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) ;
    antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx);
    antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx);
    antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx);
    antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx);
    antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx);
    antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx);
    antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx);
    antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx);
private:
    map<string,CFG*> cfg_list;
    CFG* current_cfg;
};