
// Generated from gram1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "gram1Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by gram1Parser.
 */
class  gram1Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(gram1Parser::ProgContext *ctx) = 0;
  virtual void exitProg(gram1Parser::ProgContext *ctx) = 0;

  virtual void enterReturn_instruction(gram1Parser::Return_instructionContext *ctx) = 0;
  virtual void exitReturn_instruction(gram1Parser::Return_instructionContext *ctx) = 0;


};

