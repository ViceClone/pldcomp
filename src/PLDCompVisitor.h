
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PLDCompParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PLDCompParser.
 */
class  PLDCompVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PLDCompParser.
   */
    virtual antlrcpp::Any visitProg(PLDCompParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitFunctiondefinition(PLDCompParser::FunctiondefinitionContext *context) = 0;

    virtual antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *context) = 0;

    virtual antlrcpp::Any visitStatement(PLDCompParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitIfstatement(PLDCompParser::IfstatementContext *context) = 0;

    virtual antlrcpp::Any visitWhilestatement(PLDCompParser::WhilestatementContext *context) = 0;

    virtual antlrcpp::Any visitForstatement(PLDCompParser::ForstatementContext *context) = 0;

    virtual antlrcpp::Any visitCallstatement(PLDCompParser::CallstatementContext *context) = 0;

    virtual antlrcpp::Any visitCall(PLDCompParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitDeclArray(PLDCompParser::DeclArrayContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *context) = 0;

    virtual antlrcpp::Any visitIdL(PLDCompParser::IdLContext *context) = 0;

    virtual antlrcpp::Any visitArrayL(PLDCompParser::ArrayLContext *context) = 0;

    virtual antlrcpp::Any visitArray(PLDCompParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *context) = 0;

    virtual antlrcpp::Any visitIncrdecrstatement(PLDCompParser::IncrdecrstatementContext *context) = 0;

    virtual antlrcpp::Any visitIncr_decr(PLDCompParser::Incr_decrContext *context) = 0;

    virtual antlrcpp::Any visitIncr_decr_op(PLDCompParser::Incr_decr_opContext *context) = 0;

    virtual antlrcpp::Any visitCompoundassignment(PLDCompParser::CompoundassignmentContext *context) = 0;

    virtual antlrcpp::Any visitCompoundassignmentstatement(PLDCompParser::CompoundassignmentstatementContext *context) = 0;

    virtual antlrcpp::Any visitPar(PLDCompParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitCharConst(PLDCompParser::CharConstContext *context) = 0;

    virtual antlrcpp::Any visitVar(PLDCompParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *context) = 0;

    virtual antlrcpp::Any visitConst(PLDCompParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *context) = 0;

    virtual antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *context) = 0;

    virtual antlrcpp::Any visitRel2Expr(PLDCompParser::Rel2ExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOr(PLDCompParser::LogicalOrContext *context) = 0;

    virtual antlrcpp::Any visitArrayExpr(PLDCompParser::ArrayExprContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseXor(PLDCompParser::BitwiseXorContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseOr(PLDCompParser::BitwiseOrContext *context) = 0;

    virtual antlrcpp::Any visitShiftOp(PLDCompParser::ShiftOpContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAnd(PLDCompParser::LogicalAndContext *context) = 0;

    virtual antlrcpp::Any visitCompoundAssignmentExpr(PLDCompParser::CompoundAssignmentExprContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseAnd(PLDCompParser::BitwiseAndContext *context) = 0;

    virtual antlrcpp::Any visitRel1Expr(PLDCompParser::Rel1ExprContext *context) = 0;

    virtual antlrcpp::Any visitCallExpr(PLDCompParser::CallExprContext *context) = 0;

    virtual antlrcpp::Any visitIncDecExpr(PLDCompParser::IncDecExprContext *context) = 0;

    virtual antlrcpp::Any visitType(PLDCompParser::TypeContext *context) = 0;


};

