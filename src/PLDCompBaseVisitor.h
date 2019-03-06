
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

  virtual antlrcpp::Any visitReturn_instruction(PLDCompParser::Return_instructionContext *ctx) override {
    return visitChildren(ctx);
  }


};

