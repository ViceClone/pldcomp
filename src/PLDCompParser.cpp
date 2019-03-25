
// Generated from PLDComp.g4 by ANTLR 4.7.2


#include "PLDCompVisitor.h"

#include "PLDCompParser.h"


using namespace antlrcpp;
using namespace antlr4;

PLDCompParser::PLDCompParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PLDCompParser::~PLDCompParser() {
  delete _interpreter;
}

std::string PLDCompParser::getGrammarFileName() const {
  return "PLDComp.g4";
}

const std::vector<std::string>& PLDCompParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PLDCompParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

PLDCompParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::DeclarationContext* PLDCompParser::ProgContext::declaration() {
  return getRuleContext<PLDCompParser::DeclarationContext>(0);
}

tree::TerminalNode* PLDCompParser::ProgContext::EOF() {
  return getToken(PLDCompParser::EOF, 0);
}


size_t PLDCompParser::ProgContext::getRuleIndex() const {
  return PLDCompParser::RuleProg;
}


antlrcpp::Any PLDCompParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::ProgContext* PLDCompParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, PLDCompParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    declaration();
    setState(19);
    match(PLDCompParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

PLDCompParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::TypeContext* PLDCompParser::DeclarationContext::type() {
  return getRuleContext<PLDCompParser::TypeContext>(0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::LEFT_BRACE() {
  return getToken(PLDCompParser::LEFT_BRACE, 0);
}

PLDCompParser::StatementseqContext* PLDCompParser::DeclarationContext::statementseq() {
  return getRuleContext<PLDCompParser::StatementseqContext>(0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::RIGHT_BRACE() {
  return getToken(PLDCompParser::RIGHT_BRACE, 0);
}


size_t PLDCompParser::DeclarationContext::getRuleIndex() const {
  return PLDCompParser::RuleDeclaration;
}


antlrcpp::Any PLDCompParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::DeclarationContext* PLDCompParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, PLDCompParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    type();
    setState(22);
    match(PLDCompParser::ID);
    setState(23);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(24);
    match(PLDCompParser::RIGHT_PARENTHESE);
    setState(25);
    match(PLDCompParser::LEFT_BRACE);
    setState(26);
    statementseq();
    setState(27);
    match(PLDCompParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementseqContext ------------------------------------------------------------------

PLDCompParser::StatementseqContext::StatementseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PLDCompParser::StatementContext *> PLDCompParser::StatementseqContext::statement() {
  return getRuleContexts<PLDCompParser::StatementContext>();
}

PLDCompParser::StatementContext* PLDCompParser::StatementseqContext::statement(size_t i) {
  return getRuleContext<PLDCompParser::StatementContext>(i);
}


size_t PLDCompParser::StatementseqContext::getRuleIndex() const {
  return PLDCompParser::RuleStatementseq;
}


antlrcpp::Any PLDCompParser::StatementseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitStatementseq(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::StatementseqContext* PLDCompParser::statementseq() {
  StatementseqContext *_localctx = _tracker.createInstance<StatementseqContext>(_ctx, getState());
  enterRule(_localctx, 4, PLDCompParser::RuleStatementseq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(29);
      statement();
      setState(32); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCompParser::RETURN)
      | (1ULL << PLDCompParser::INT_TYPE)
      | (1ULL << PLDCompParser::ID))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PLDCompParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::VardeclarationContext* PLDCompParser::StatementContext::vardeclaration() {
  return getRuleContext<PLDCompParser::VardeclarationContext>(0);
}

PLDCompParser::ReturnstatementContext* PLDCompParser::StatementContext::returnstatement() {
  return getRuleContext<PLDCompParser::ReturnstatementContext>(0);
}

PLDCompParser::AssignmentstatContext* PLDCompParser::StatementContext::assignmentstat() {
  return getRuleContext<PLDCompParser::AssignmentstatContext>(0);
}


size_t PLDCompParser::StatementContext::getRuleIndex() const {
  return PLDCompParser::RuleStatement;
}


antlrcpp::Any PLDCompParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::StatementContext* PLDCompParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, PLDCompParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCompParser::INT_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        vardeclaration();
        break;
      }

      case PLDCompParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        returnstatement();
        break;
      }

      case PLDCompParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(36);
        assignmentstat();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardeclarationContext ------------------------------------------------------------------

PLDCompParser::VardeclarationContext::VardeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCompParser::VardeclarationContext::getRuleIndex() const {
  return PLDCompParser::RuleVardeclaration;
}

void PLDCompParser::VardeclarationContext::copyFrom(VardeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclWithoutAssignmentContext ------------------------------------------------------------------

PLDCompParser::TypeContext* PLDCompParser::DeclWithoutAssignmentContext::type() {
  return getRuleContext<PLDCompParser::TypeContext>(0);
}

tree::TerminalNode* PLDCompParser::DeclWithoutAssignmentContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

tree::TerminalNode* PLDCompParser::DeclWithoutAssignmentContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}

PLDCompParser::DeclWithoutAssignmentContext::DeclWithoutAssignmentContext(VardeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::DeclWithoutAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDeclWithoutAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclWithAssignmentContext ------------------------------------------------------------------

PLDCompParser::TypeContext* PLDCompParser::DeclWithAssignmentContext::type() {
  return getRuleContext<PLDCompParser::TypeContext>(0);
}

tree::TerminalNode* PLDCompParser::DeclWithAssignmentContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

tree::TerminalNode* PLDCompParser::DeclWithAssignmentContext::ASSIGN() {
  return getToken(PLDCompParser::ASSIGN, 0);
}

PLDCompParser::ExprContext* PLDCompParser::DeclWithAssignmentContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::DeclWithAssignmentContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}

PLDCompParser::DeclWithAssignmentContext::DeclWithAssignmentContext(VardeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::DeclWithAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDeclWithAssignment(this);
  else
    return visitor->visitChildren(this);
}
PLDCompParser::VardeclarationContext* PLDCompParser::vardeclaration() {
  VardeclarationContext *_localctx = _tracker.createInstance<VardeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, PLDCompParser::RuleVardeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(39);
      type();
      setState(40);
      match(PLDCompParser::ID);
      setState(41);
      match(PLDCompParser::ASSIGN);
      setState(42);
      expr(0);
      setState(43);
      match(PLDCompParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithoutAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(45);
      type();
      setState(46);
      match(PLDCompParser::ID);
      setState(47);
      match(PLDCompParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentstatContext ------------------------------------------------------------------

PLDCompParser::AssignmentstatContext::AssignmentstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCompParser::AssignmentstatContext::getRuleIndex() const {
  return PLDCompParser::RuleAssignmentstat;
}

void PLDCompParser::AssignmentstatContext::copyFrom(AssignmentstatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignmentExprContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::AssignmentExprContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

tree::TerminalNode* PLDCompParser::AssignmentExprContext::ASSIGN() {
  return getToken(PLDCompParser::ASSIGN, 0);
}

PLDCompParser::ExprContext* PLDCompParser::AssignmentExprContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::AssignmentExprContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}

PLDCompParser::AssignmentExprContext::AssignmentExprContext(AssignmentstatContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::AssignmentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpr(this);
  else
    return visitor->visitChildren(this);
}
PLDCompParser::AssignmentstatContext* PLDCompParser::assignmentstat() {
  AssignmentstatContext *_localctx = _tracker.createInstance<AssignmentstatContext>(_ctx, getState());
  enterRule(_localctx, 10, PLDCompParser::RuleAssignmentstat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AssignmentstatContext *>(_tracker.createInstance<PLDCompParser::AssignmentExprContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(PLDCompParser::ID);
    setState(52);
    match(PLDCompParser::ASSIGN);
    setState(53);
    expr(0);
    setState(54);
    match(PLDCompParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnstatementContext ------------------------------------------------------------------

PLDCompParser::ReturnstatementContext::ReturnstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::ReturnstatementContext::RETURN() {
  return getToken(PLDCompParser::RETURN, 0);
}

PLDCompParser::ExprContext* PLDCompParser::ReturnstatementContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::ReturnstatementContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}


size_t PLDCompParser::ReturnstatementContext::getRuleIndex() const {
  return PLDCompParser::RuleReturnstatement;
}


antlrcpp::Any PLDCompParser::ReturnstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitReturnstatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::ReturnstatementContext* PLDCompParser::returnstatement() {
  ReturnstatementContext *_localctx = _tracker.createInstance<ReturnstatementContext>(_ctx, getState());
  enterRule(_localctx, 12, PLDCompParser::RuleReturnstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(PLDCompParser::RETURN);
    setState(57);
    expr(0);
    setState(58);
    match(PLDCompParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

PLDCompParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCompParser::ExprContext::getRuleIndex() const {
  return PLDCompParser::RuleExpr;
}

void PLDCompParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::ParContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

PLDCompParser::ExprContext* PLDCompParser::ParContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::ParContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

PLDCompParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::VarContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

PLDCompParser::VarContext::VarContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicativeOpContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::MultiplicativeOpContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::MultiplicativeOpContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::MultiplicativeOpContext::STAR() {
  return getToken(PLDCompParser::STAR, 0);
}

tree::TerminalNode* PLDCompParser::MultiplicativeOpContext::DIV() {
  return getToken(PLDCompParser::DIV, 0);
}

tree::TerminalNode* PLDCompParser::MultiplicativeOpContext::MOD() {
  return getToken(PLDCompParser::MOD, 0);
}

PLDCompParser::MultiplicativeOpContext::MultiplicativeOpContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::MultiplicativeOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::ConstContext::INT() {
  return getToken(PLDCompParser::INT, 0);
}

PLDCompParser::ConstContext::ConstContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveOpContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::AdditiveOpContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::AdditiveOpContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::AdditiveOpContext::PLUS() {
  return getToken(PLDCompParser::PLUS, 0);
}

tree::TerminalNode* PLDCompParser::AdditiveOpContext::MINUS() {
  return getToken(PLDCompParser::MINUS, 0);
}

PLDCompParser::AdditiveOpContext::AdditiveOpContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::AdditiveOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitAdditiveOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegExprContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::NegExprContext::MINUS() {
  return getToken(PLDCompParser::MINUS, 0);
}

tree::TerminalNode* PLDCompParser::NegExprContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

PLDCompParser::ExprContext* PLDCompParser::NegExprContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::NegExprContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

PLDCompParser::NegExprContext::NegExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::NegExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitNegExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegConstContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::NegConstContext::MINUS() {
  return getToken(PLDCompParser::MINUS, 0);
}

tree::TerminalNode* PLDCompParser::NegConstContext::INT() {
  return getToken(PLDCompParser::INT, 0);
}

PLDCompParser::NegConstContext::NegConstContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::NegConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitNegConst(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::ExprContext* PLDCompParser::expr() {
   return expr(0);
}

PLDCompParser::ExprContext* PLDCompParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PLDCompParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  PLDCompParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, PLDCompParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(61);
      match(PLDCompParser::LEFT_PARENTHESE);
      setState(62);
      expr(0);
      setState(63);
      match(PLDCompParser::RIGHT_PARENTHESE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NegExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(65);
      match(PLDCompParser::MINUS);
      setState(66);
      match(PLDCompParser::LEFT_PARENTHESE);
      setState(67);
      expr(0);
      setState(68);
      match(PLDCompParser::RIGHT_PARENTHESE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(70);
      match(PLDCompParser::INT);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NegConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      match(PLDCompParser::MINUS);
      setState(72);
      match(PLDCompParser::INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NegExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(73);
      match(PLDCompParser::MINUS);
      setState(74);
      match(PLDCompParser::LEFT_PARENTHESE);
      setState(75);
      expr(0);
      setState(76);
      match(PLDCompParser::RIGHT_PARENTHESE);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(78);
      match(PLDCompParser::ID);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(89);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(87);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(82);
          dynamic_cast<MultiplicativeOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PLDCompParser::STAR)
            | (1ULL << PLDCompParser::DIV)
            | (1ULL << PLDCompParser::MOD))) != 0))) {
            dynamic_cast<MultiplicativeOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(83);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(84);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(85);
          dynamic_cast<AdditiveOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PLDCompParser::PLUS

          || _la == PLDCompParser::MINUS)) {
            dynamic_cast<AdditiveOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(86);
          expr(6);
          break;
        }

        } 
      }
      setState(91);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

PLDCompParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::TypeContext::INT_TYPE() {
  return getToken(PLDCompParser::INT_TYPE, 0);
}


size_t PLDCompParser::TypeContext::getRuleIndex() const {
  return PLDCompParser::RuleType;
}


antlrcpp::Any PLDCompParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::TypeContext* PLDCompParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 16, PLDCompParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(PLDCompParser::INT_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PLDCompParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PLDCompParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> PLDCompParser::_decisionToDFA;
atn::PredictionContextCache PLDCompParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PLDCompParser::_atn;
std::vector<uint16_t> PLDCompParser::_serializedATN;

std::vector<std::string> PLDCompParser::_ruleNames = {
  "prog", "declaration", "statementseq", "statement", "vardeclaration", 
  "assignmentstat", "returnstatement", "expr", "type"
};

std::vector<std::string> PLDCompParser::_literalNames = {
  "", "'return'", "'int'", "", "", "'='", "';'", "'}'", "'{'", "'('", "')'", 
  "'+'", "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> PLDCompParser::_symbolicNames = {
  "", "RETURN", "INT_TYPE", "ID", "INT", "ASSIGN", "SEMICOLON", "RIGHT_BRACE", 
  "LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", "MINUS", 
  "STAR", "DIV", "MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT"
};

dfa::Vocabulary PLDCompParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PLDCompParser::_tokenNames;

PLDCompParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x15, 0x61, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x6, 0x4, 0x21, 0xa, 0x4, 0xd, 0x4, 
    0xe, 0x4, 0x22, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x28, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x34, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x52, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x5a, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x5d, 0xb, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x2, 0x3, 0x10, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x2, 0x4, 0x3, 0x2, 0xf, 0x11, 0x3, 0x2, 0xd, 0xe, 
    0x2, 0x62, 0x2, 0x14, 0x3, 0x2, 0x2, 0x2, 0x4, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x20, 0x3, 0x2, 0x2, 0x2, 0x8, 0x27, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0xc, 0x35, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x51, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 0x4, 0x3, 0x2, 0x15, 0x16, 0x7, 0x2, 
    0x2, 0x3, 0x16, 0x3, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x5, 0x12, 0xa, 
    0x2, 0x18, 0x19, 0x7, 0x5, 0x2, 0x2, 0x19, 0x1a, 0x7, 0xb, 0x2, 0x2, 
    0x1a, 0x1b, 0x7, 0xc, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0xa, 0x2, 0x2, 0x1c, 
    0x1d, 0x5, 0x6, 0x4, 0x2, 0x1d, 0x1e, 0x7, 0x9, 0x2, 0x2, 0x1e, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x21, 0x5, 0x8, 0x5, 0x2, 0x20, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x28, 0x5, 0xa, 0x6, 0x2, 0x25, 0x28, 0x5, 0xe, 0x8, 0x2, 
    0x26, 0x28, 0x5, 0xc, 0x7, 0x2, 0x27, 0x24, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x5, 0x12, 0xa, 0x2, 0x2a, 0x2b, 0x7, 
    0x5, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x7, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0x10, 
    0x9, 0x2, 0x2d, 0x2e, 0x7, 0x8, 0x2, 0x2, 0x2e, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x30, 0x5, 0x12, 0xa, 0x2, 0x30, 0x31, 0x7, 0x5, 0x2, 0x2, 
    0x31, 0x32, 0x7, 0x8, 0x2, 0x2, 0x32, 0x34, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x33, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x34, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x5, 0x2, 0x2, 0x36, 0x37, 0x7, 
    0x7, 0x2, 0x2, 0x37, 0x38, 0x5, 0x10, 0x9, 0x2, 0x38, 0x39, 0x7, 0x8, 
    0x2, 0x2, 0x39, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x3, 0x2, 
    0x2, 0x3b, 0x3c, 0x5, 0x10, 0x9, 0x2, 0x3c, 0x3d, 0x7, 0x8, 0x2, 0x2, 
    0x3d, 0xf, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x8, 0x9, 0x1, 0x2, 0x3f, 
    0x40, 0x7, 0xb, 0x2, 0x2, 0x40, 0x41, 0x5, 0x10, 0x9, 0x2, 0x41, 0x42, 
    0x7, 0xc, 0x2, 0x2, 0x42, 0x52, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 
    0xe, 0x2, 0x2, 0x44, 0x45, 0x7, 0xb, 0x2, 0x2, 0x45, 0x46, 0x5, 0x10, 
    0x9, 0x2, 0x46, 0x47, 0x7, 0xc, 0x2, 0x2, 0x47, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x52, 0x7, 0x6, 0x2, 0x2, 0x49, 0x4a, 0x7, 0xe, 0x2, 0x2, 
    0x4a, 0x52, 0x7, 0x6, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0xe, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0xb, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x10, 0x9, 0x2, 0x4e, 0x4f, 
    0x7, 0xc, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x7, 
    0x5, 0x2, 0x2, 0x51, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x48, 0x3, 0x2, 0x2, 0x2, 0x51, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0xc, 0x8, 0x2, 0x2, 0x54, 
    0x55, 0x9, 0x2, 0x2, 0x2, 0x55, 0x5a, 0x5, 0x10, 0x9, 0x9, 0x56, 0x57, 
    0xc, 0x7, 0x2, 0x2, 0x57, 0x58, 0x9, 0x3, 0x2, 0x2, 0x58, 0x5a, 0x5, 
    0x10, 0x9, 0x8, 0x59, 0x53, 0x3, 0x2, 0x2, 0x2, 0x59, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x4, 0x2, 0x2, 0x5f, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x8, 0x22, 0x27, 0x33, 0x51, 0x59, 0x5b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PLDCompParser::Initializer PLDCompParser::_init;
