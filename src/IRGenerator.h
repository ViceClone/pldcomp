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
    
    antlrcpp::Any visitFunctiondefinition(PLDCompParser::FunctiondefinitionContext *ctx);
    
    antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *ctx);
    
    antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx);

    antlrcpp::Any visitCallstatement(PLDCompParser::CallstatementContext *ctx);

    antlrcpp::Any visitCall(PLDCompParser::CallContext *ctx);

    antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx);
    antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx);
    

    antlrcpp::Any visitIfstatement(PLDCompParser::IfstatementContext *ctx);
    antlrcpp::Any visitWhilestatement(PLDCompParser::WhilestatementContext *ctx);
    
    antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) ;
    
    antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) ;
    
    antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx); 
    antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx);  
    antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx);
    antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx);
    antlrcpp::Any visitCharConst(PLDCompParser::CharConstContext *ctx);
    antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx);
    antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx);
    antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx);
    antlrcpp::Any visitCallExpr(PLDCompParser::CallExprContext *ctx);
    antlrcpp::Any visitRel1Expr(PLDCompParser::Rel1ExprContext *ctx);
    antlrcpp::Any visitRel2Expr(PLDCompParser::Rel2ExprContext *ctx);
    antlrcpp::Any visitBitwiseAnd(PLDCompParser::BitwiseAndContext *ctx);
    antlrcpp::Any visitBitwiseXor(PLDCompParser::BitwiseXorContext *ctx);
    antlrcpp::Any visitBitwiseOr(PLDCompParser::BitwiseOrContext *ctx);
    antlrcpp::Any visitLogicalAnd(PLDCompParser::LogicalAndContext *ctx);
    antlrcpp::Any visitLogicalOr(PLDCompParser::LogicalOrContext *ctx);
    
    antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx);
private:
    map<string,CFG*> cfg_list;
    CFG* current_cfg;
};