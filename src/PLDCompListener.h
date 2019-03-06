
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PLDCompParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PLDCompParser.
 */
class  PLDCompListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(PLDCompParser::ProgContext *ctx) = 0;
  virtual void exitProg(PLDCompParser::ProgContext *ctx) = 0;

  virtual void enterReturn_instruction(PLDCompParser::Return_instructionContext *ctx) = 0;
  virtual void exitReturn_instruction(PLDCompParser::Return_instructionContext *ctx) = 0;


};

