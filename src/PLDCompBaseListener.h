
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

  virtual void enterDeclaration(PLDCompParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(PLDCompParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterStatementseq(PLDCompParser::StatementseqContext * /*ctx*/) override { }
  virtual void exitStatementseq(PLDCompParser::StatementseqContext * /*ctx*/) override { }

  virtual void enterStatement(PLDCompParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(PLDCompParser::StatementContext * /*ctx*/) override { }

  virtual void enterReturnstatement(PLDCompParser::ReturnstatementContext * /*ctx*/) override { }
  virtual void exitReturnstatement(PLDCompParser::ReturnstatementContext * /*ctx*/) override { }

  virtual void enterConst(PLDCompParser::ConstContext * /*ctx*/) override { }
  virtual void exitConst(PLDCompParser::ConstContext * /*ctx*/) override { }

  virtual void enterPar(PLDCompParser::ParContext * /*ctx*/) override { }
  virtual void exitPar(PLDCompParser::ParContext * /*ctx*/) override { }

  virtual void enterType(PLDCompParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(PLDCompParser::TypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

