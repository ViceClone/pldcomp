
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

  virtual antlrcpp::Any visitDeclaration(PLDCompParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentstat(PLDCompParser::AssignmentstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(PLDCompParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

