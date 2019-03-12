
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

  virtual void enterDeclaration(PLDCompParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(PLDCompParser::DeclarationContext *ctx) = 0;

  virtual void enterStatementseq(PLDCompParser::StatementseqContext *ctx) = 0;
  virtual void exitStatementseq(PLDCompParser::StatementseqContext *ctx) = 0;

  virtual void enterStatement(PLDCompParser::StatementContext *ctx) = 0;
  virtual void exitStatement(PLDCompParser::StatementContext *ctx) = 0;

  virtual void enterReturnstatement(PLDCompParser::ReturnstatementContext *ctx) = 0;
  virtual void exitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) = 0;

  virtual void enterConst(PLDCompParser::ConstContext *ctx) = 0;
  virtual void exitConst(PLDCompParser::ConstContext *ctx) = 0;

  virtual void enterPar(PLDCompParser::ParContext *ctx) = 0;
  virtual void exitPar(PLDCompParser::ParContext *ctx) = 0;

  virtual void enterType(PLDCompParser::TypeContext *ctx) = 0;
  virtual void exitType(PLDCompParser::TypeContext *ctx) = 0;


};

