
// Generated from gram1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "gram1Listener.h"


/**
 * This class provides an empty implementation of gram1Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  gram1BaseListener : public gram1Listener {
public:

  virtual void enterProg(gram1Parser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(gram1Parser::ProgContext * /*ctx*/) override { }

  virtual void enterReturn_instruction(gram1Parser::Return_instructionContext * /*ctx*/) override { }
  virtual void exitReturn_instruction(gram1Parser::Return_instructionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

