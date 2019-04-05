
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

tree::TerminalNode* PLDCompParser::ProgContext::EOF() {
  return getToken(PLDCompParser::EOF, 0);
}

std::vector<PLDCompParser::FunctiondefinitionContext *> PLDCompParser::ProgContext::functiondefinition() {
  return getRuleContexts<PLDCompParser::FunctiondefinitionContext>();
}

PLDCompParser::FunctiondefinitionContext* PLDCompParser::ProgContext::functiondefinition(size_t i) {
  return getRuleContext<PLDCompParser::FunctiondefinitionContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      functiondefinition();
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PLDCompParser::INT_TYPE);
    setState(27);
    match(PLDCompParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

PLDCompParser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PLDCompParser::TypeContext *> PLDCompParser::FunctiondefinitionContext::type() {
  return getRuleContexts<PLDCompParser::TypeContext>();
}

PLDCompParser::TypeContext* PLDCompParser::FunctiondefinitionContext::type(size_t i) {
  return getRuleContext<PLDCompParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> PLDCompParser::FunctiondefinitionContext::ID() {
  return getTokens(PLDCompParser::ID);
}

tree::TerminalNode* PLDCompParser::FunctiondefinitionContext::ID(size_t i) {
  return getToken(PLDCompParser::ID, i);
}

tree::TerminalNode* PLDCompParser::FunctiondefinitionContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

tree::TerminalNode* PLDCompParser::FunctiondefinitionContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

tree::TerminalNode* PLDCompParser::FunctiondefinitionContext::LEFT_BRACE() {
  return getToken(PLDCompParser::LEFT_BRACE, 0);
}

PLDCompParser::StatementseqContext* PLDCompParser::FunctiondefinitionContext::statementseq() {
  return getRuleContext<PLDCompParser::StatementseqContext>(0);
}

tree::TerminalNode* PLDCompParser::FunctiondefinitionContext::RIGHT_BRACE() {
  return getToken(PLDCompParser::RIGHT_BRACE, 0);
}


size_t PLDCompParser::FunctiondefinitionContext::getRuleIndex() const {
  return PLDCompParser::RuleFunctiondefinition;
}


antlrcpp::Any PLDCompParser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitFunctiondefinition(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::FunctiondefinitionContext* PLDCompParser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, PLDCompParser::RuleFunctiondefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    type();
    setState(30);
    match(PLDCompParser::ID);
    setState(31);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PLDCompParser::INT_TYPE) {
      setState(32);
      type();
      setState(33);
      match(PLDCompParser::ID);
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCompParser::T__0) {
        setState(34);
        match(PLDCompParser::T__0);
        setState(35);
        type();
        setState(36);
        match(PLDCompParser::ID);
        setState(42);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(45);
    match(PLDCompParser::RIGHT_PARENTHESE);
    setState(46);
    match(PLDCompParser::LEFT_BRACE);
    setState(47);
    statementseq();
    setState(48);
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
    setState(51); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(50);
      statement();
      setState(53); 
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

PLDCompParser::CallstatementContext* PLDCompParser::StatementContext::callstatement() {
  return getRuleContext<PLDCompParser::CallstatementContext>(0);
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
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(55);
      vardeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      callstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(57);
      returnstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(58);
      assignmentstat();
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

//----------------- CallstatementContext ------------------------------------------------------------------

PLDCompParser::CallstatementContext::CallstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::CallContext* PLDCompParser::CallstatementContext::call() {
  return getRuleContext<PLDCompParser::CallContext>(0);
}

tree::TerminalNode* PLDCompParser::CallstatementContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}


size_t PLDCompParser::CallstatementContext::getRuleIndex() const {
  return PLDCompParser::RuleCallstatement;
}


antlrcpp::Any PLDCompParser::CallstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitCallstatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::CallstatementContext* PLDCompParser::callstatement() {
  CallstatementContext *_localctx = _tracker.createInstance<CallstatementContext>(_ctx, getState());
  enterRule(_localctx, 8, PLDCompParser::RuleCallstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    call();
    setState(62);
    match(PLDCompParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

PLDCompParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::CallContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

tree::TerminalNode* PLDCompParser::CallContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

tree::TerminalNode* PLDCompParser::CallContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

std::vector<PLDCompParser::ExprContext *> PLDCompParser::CallContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::CallContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}


size_t PLDCompParser::CallContext::getRuleIndex() const {
  return PLDCompParser::RuleCall;
}


antlrcpp::Any PLDCompParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::CallContext* PLDCompParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 10, PLDCompParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(PLDCompParser::ID);
    setState(65);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCompParser::ID)
      | (1ULL << PLDCompParser::INT)
      | (1ULL << PLDCompParser::LEFT_PARENTHESE)
      | (1ULL << PLDCompParser::MINUS))) != 0)) {
      setState(66);
      expr(0);
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCompParser::T__0) {
        setState(67);
        match(PLDCompParser::T__0);
        setState(68);
        expr(0);
        setState(73);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(76);
    match(PLDCompParser::RIGHT_PARENTHESE);
   
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
  enterRule(_localctx, 12, PLDCompParser::RuleVardeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(78);
      type();
      setState(79);
      match(PLDCompParser::ID);
      setState(80);
      match(PLDCompParser::ASSIGN);
      setState(81);
      expr(0);
      setState(82);
      match(PLDCompParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithoutAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(84);
      type();
      setState(85);
      match(PLDCompParser::ID);
      setState(86);
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
  enterRule(_localctx, 14, PLDCompParser::RuleAssignmentstat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AssignmentstatContext *>(_tracker.createInstance<PLDCompParser::AssignmentExprContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(PLDCompParser::ID);
    setState(91);
    match(PLDCompParser::ASSIGN);
    setState(92);
    expr(0);
    setState(93);
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
  enterRule(_localctx, 16, PLDCompParser::RuleReturnstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(PLDCompParser::RETURN);
    setState(96);
    expr(0);
    setState(97);
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
//----------------- CallExprContext ------------------------------------------------------------------

PLDCompParser::CallContext* PLDCompParser::CallExprContext::call() {
  return getRuleContext<PLDCompParser::CallContext>(0);
}

PLDCompParser::CallExprContext::CallExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::CallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitCallExpr(this);
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, PLDCompParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(100);
      match(PLDCompParser::LEFT_PARENTHESE);
      setState(101);
      expr(0);
      setState(102);
      match(PLDCompParser::RIGHT_PARENTHESE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NegExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(104);
      match(PLDCompParser::MINUS);
      setState(105);
      match(PLDCompParser::LEFT_PARENTHESE);
      setState(106);
      expr(0);
      setState(107);
      match(PLDCompParser::RIGHT_PARENTHESE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(109);
      call();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(110);
      match(PLDCompParser::INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NegConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(111);
      match(PLDCompParser::MINUS);
      setState(112);
      match(PLDCompParser::INT);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(113);
      match(PLDCompParser::ID);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(122);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(116);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(117);
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
          setState(118);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(119);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(120);
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
          setState(121);
          expr(5);
          break;
        }

        } 
      }
      setState(126);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
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
  enterRule(_localctx, 20, PLDCompParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
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
    case 9: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PLDCompParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

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
  "prog", "functiondefinition", "statementseq", "statement", "callstatement", 
  "call", "vardeclaration", "assignmentstat", "returnstatement", "expr", 
  "type"
};

std::vector<std::string> PLDCompParser::_literalNames = {
  "", "','", "'return'", "'int'", "", "", "'='", "';'", "'}'", "'{'", "'('", 
  "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> PLDCompParser::_symbolicNames = {
  "", "", "RETURN", "INT_TYPE", "ID", "INT", "ASSIGN", "SEMICOLON", "RIGHT_BRACE", 
  "LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", "MINUS", 
  "STAR", "DIV", "MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", 
  "ERROR"
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
    0x3, 0x17, 0x84, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x6, 0x2, 0x1a, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0x1b, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x29, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x2c, 0xb, 0x3, 0x5, 0x3, 0x2e, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x6, 0x4, 
    0x36, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x37, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x3e, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x48, 0xa, 0x7, 
    0xc, 0x7, 0xe, 0x7, 0x4b, 0xb, 0x7, 0x5, 0x7, 0x4d, 0xa, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x5b, 0xa, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x75, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x7d, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x80, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x2, 0x3, 
    0x14, 0xd, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x2, 0x4, 0x3, 0x2, 0x10, 0x12, 0x3, 0x2, 0xe, 0xf, 0x2, 0x89, 0x2, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x42, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x61, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x16, 0x81, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1a, 
    0x5, 0x4, 0x3, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x2, 0x2, 
    0x3, 0x1e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x5, 0x16, 0xc, 0x2, 
    0x20, 0x21, 0x7, 0x6, 0x2, 0x2, 0x21, 0x2d, 0x7, 0xc, 0x2, 0x2, 0x22, 
    0x23, 0x5, 0x16, 0xc, 0x2, 0x23, 0x2a, 0x7, 0x6, 0x2, 0x2, 0x24, 0x25, 
    0x7, 0x3, 0x2, 0x2, 0x25, 0x26, 0x5, 0x16, 0xc, 0x2, 0x26, 0x27, 0x7, 
    0x6, 0x2, 0x2, 0x27, 0x29, 0x3, 0x2, 0x2, 0x2, 0x28, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 
    0x7, 0xd, 0x2, 0x2, 0x30, 0x31, 0x7, 0xb, 0x2, 0x2, 0x31, 0x32, 0x5, 
    0x6, 0x4, 0x2, 0x32, 0x33, 0x7, 0xa, 0x2, 0x2, 0x33, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x36, 0x5, 0x8, 0x5, 0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x7, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3e, 0x5, 0xe, 0x8, 0x2, 0x3a, 0x3e, 0x5, 0xa, 0x6, 0x2, 0x3b, 0x3e, 
    0x5, 0x12, 0xa, 0x2, 0x3c, 0x3e, 0x5, 0x10, 0x9, 0x2, 0x3d, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x3d, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x40, 0x5, 0xc, 0x7, 0x2, 0x40, 0x41, 0x7, 0x9, 0x2, 0x2, 
    0x41, 0xb, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x6, 0x2, 0x2, 0x43, 
    0x4c, 0x7, 0xc, 0x2, 0x2, 0x44, 0x49, 0x5, 0x14, 0xb, 0x2, 0x45, 0x46, 
    0x7, 0x3, 0x2, 0x2, 0x46, 0x48, 0x5, 0x14, 0xb, 0x2, 0x47, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4f, 0x7, 0xd, 0x2, 0x2, 0x4f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 
    0x5, 0x16, 0xc, 0x2, 0x51, 0x52, 0x7, 0x6, 0x2, 0x2, 0x52, 0x53, 0x7, 
    0x8, 0x2, 0x2, 0x53, 0x54, 0x5, 0x14, 0xb, 0x2, 0x54, 0x55, 0x7, 0x9, 
    0x2, 0x2, 0x55, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x16, 0xc, 
    0x2, 0x57, 0x58, 0x7, 0x6, 0x2, 0x2, 0x58, 0x59, 0x7, 0x9, 0x2, 0x2, 
    0x59, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x50, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x5b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 
    0x7, 0x6, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x8, 0x2, 0x2, 0x5e, 0x5f, 0x5, 
    0x14, 0xb, 0x2, 0x5f, 0x60, 0x7, 0x9, 0x2, 0x2, 0x60, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x62, 0x7, 0x4, 0x2, 0x2, 0x62, 0x63, 0x5, 0x14, 0xb, 
    0x2, 0x63, 0x64, 0x7, 0x9, 0x2, 0x2, 0x64, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x66, 0x8, 0xb, 0x1, 0x2, 0x66, 0x67, 0x7, 0xc, 0x2, 0x2, 0x67, 
    0x68, 0x5, 0x14, 0xb, 0x2, 0x68, 0x69, 0x7, 0xd, 0x2, 0x2, 0x69, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0xf, 0x2, 0x2, 0x6b, 0x6c, 0x7, 
    0xc, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x14, 0xb, 0x2, 0x6d, 0x6e, 0x7, 0xd, 
    0x2, 0x2, 0x6e, 0x75, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x75, 0x5, 0xc, 0x7, 
    0x2, 0x70, 0x75, 0x7, 0x7, 0x2, 0x2, 0x71, 0x72, 0x7, 0xf, 0x2, 0x2, 
    0x72, 0x75, 0x7, 0x7, 0x2, 0x2, 0x73, 0x75, 0x7, 0x6, 0x2, 0x2, 0x74, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 0x74, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x77, 0xc, 0x7, 0x2, 0x2, 0x77, 0x78, 0x9, 0x2, 0x2, 
    0x2, 0x78, 0x7d, 0x5, 0x14, 0xb, 0x8, 0x79, 0x7a, 0xc, 0x6, 0x2, 0x2, 
    0x7a, 0x7b, 0x9, 0x3, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0x14, 0xb, 0x7, 0x7c, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x82, 0x7, 0x5, 0x2, 0x2, 0x82, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xd, 0x1b, 0x2a, 0x2d, 0x37, 0x3d, 0x49, 0x4c, 0x5a, 0x74, 0x7c, 
    0x7e, 
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
