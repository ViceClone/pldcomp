
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PLDCompListener.h"


/**
 * This class provides an empty implementation of PLDCompListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PLDCompBaseListener : public PLDCompListener {
public:

  virtual void enterProg(PLDCompParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(PLDCompParser::ProgContext * /*ctx*/) override { }

  virtual void enterReturn_instruction(PLDCompParser::Return_instructionContext * /*ctx*/) override { }
  virtual void exitReturn_instruction(PLDCompParser::Return_instructionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

