
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

  virtual antlrcpp::Any visitFuncNoParams(PLDCompParser::FuncNoParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncWithParams(PLDCompParser::FuncWithParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallNoParams(PLDCompParser::CallNoParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallWithParams(PLDCompParser::CallWithParamsContext *ctx) override {
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

  virtual antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

