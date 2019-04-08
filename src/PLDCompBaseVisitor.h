
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PLDCompVisitor.h"


/**
 * This class provides an empty implementation of PLDCompVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PLDCompBaseVisitor : public PLDCompVisitor {
public:

  virtual antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiondefinition(PLDCompParser::FunctiondefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfstatement(PLDCompParser::IfstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhilestatement(PLDCompParser::WhilestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallstatement(PLDCompParser::CallstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(PLDCompParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharConst(PLDCompParser::CharConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel2Expr(PLDCompParser::Rel2ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOr(PLDCompParser::LogicalOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseXor(PLDCompParser::BitwiseXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseOr(PLDCompParser::BitwiseOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalAnd(PLDCompParser::LogicalAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseAnd(PLDCompParser::BitwiseAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel1Expr(PLDCompParser::Rel1ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallExpr(PLDCompParser::CallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

