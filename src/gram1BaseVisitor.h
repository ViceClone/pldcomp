
// Generated from gram1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "gram1Visitor.h"


/**
 * This class provides an empty implementation of gram1Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  gram1BaseVisitor : public gram1Visitor {
public:

  virtual antlrcpp::Any visitProg(gram1Parser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_instruction(gram1Parser::Return_instructionContext *ctx) override {
    return visitChildren(ctx);
  }


};

