
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
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCompParser::INT_TYPE)
      | (1ULL << PLDCompParser::INT32_TYPE)
      | (1ULL << PLDCompParser::CHAR_TYPE)
      | (1ULL << PLDCompParser::VOID_TYPE))) != 0)) {
      setState(42);
      functiondefinition();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
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

tree::TerminalNode* PLDCompParser::FunctiondefinitionContext::VOID_TYPE() {
  return getToken(PLDCompParser::VOID_TYPE, 0);
}

std::vector<tree::TerminalNode *> PLDCompParser::FunctiondefinitionContext::COMMA() {
  return getTokens(PLDCompParser::COMMA);
}

tree::TerminalNode* PLDCompParser::FunctiondefinitionContext::COMMA(size_t i) {
  return getToken(PLDCompParser::COMMA, i);
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
    setState(50);
    type();
    setState(51);
    match(PLDCompParser::ID);
    setState(52);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(65);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(53);
      type();
      setState(54);
      match(PLDCompParser::ID);
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCompParser::COMMA) {
        setState(55);
        match(PLDCompParser::COMMA);
        setState(56);
        type();
        setState(57);
        match(PLDCompParser::ID);
        setState(63);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      setState(64);
      match(PLDCompParser::VOID_TYPE);
      break;
    }

    }
    setState(67);
    match(PLDCompParser::RIGHT_PARENTHESE);
    setState(68);
    match(PLDCompParser::LEFT_BRACE);
    setState(69);
    statementseq();
    setState(70);
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
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCompParser::T__0)
      | (1ULL << PLDCompParser::RETURN)
      | (1ULL << PLDCompParser::INT_TYPE)
      | (1ULL << PLDCompParser::INT32_TYPE)
      | (1ULL << PLDCompParser::CHAR_TYPE)
      | (1ULL << PLDCompParser::VOID_TYPE)
      | (1ULL << PLDCompParser::IF)
      | (1ULL << PLDCompParser::WHILE)
      | (1ULL << PLDCompParser::ID)
      | (1ULL << PLDCompParser::PLUSPLUS)
      | (1ULL << PLDCompParser::MINUSMINUS))) != 0)) {
      setState(72);
      statement();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
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

PLDCompParser::IfstatementContext* PLDCompParser::StatementContext::ifstatement() {
  return getRuleContext<PLDCompParser::IfstatementContext>(0);
}

PLDCompParser::WhilestatementContext* PLDCompParser::StatementContext::whilestatement() {
  return getRuleContext<PLDCompParser::WhilestatementContext>(0);
}

PLDCompParser::ForstatementContext* PLDCompParser::StatementContext::forstatement() {
  return getRuleContext<PLDCompParser::ForstatementContext>(0);
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

PLDCompParser::IncrdecrstatementContext* PLDCompParser::StatementContext::incrdecrstatement() {
  return getRuleContext<PLDCompParser::IncrdecrstatementContext>(0);
}

PLDCompParser::CompoundassignmentstatementContext* PLDCompParser::StatementContext::compoundassignmentstatement() {
  return getRuleContext<PLDCompParser::CompoundassignmentstatementContext>(0);
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
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      vardeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      ifstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(80);
      whilestatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(81);
      forstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(82);
      callstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(83);
      returnstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(84);
      assignmentstat();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(85);
      incrdecrstatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(86);
      compoundassignmentstatement();
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

//----------------- IfstatementContext ------------------------------------------------------------------

PLDCompParser::IfstatementContext::IfstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::IfstatementContext::IF() {
  return getToken(PLDCompParser::IF, 0);
}

tree::TerminalNode* PLDCompParser::IfstatementContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

PLDCompParser::ExprContext* PLDCompParser::IfstatementContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::IfstatementContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

std::vector<tree::TerminalNode *> PLDCompParser::IfstatementContext::LEFT_BRACE() {
  return getTokens(PLDCompParser::LEFT_BRACE);
}

tree::TerminalNode* PLDCompParser::IfstatementContext::LEFT_BRACE(size_t i) {
  return getToken(PLDCompParser::LEFT_BRACE, i);
}

std::vector<PLDCompParser::StatementseqContext *> PLDCompParser::IfstatementContext::statementseq() {
  return getRuleContexts<PLDCompParser::StatementseqContext>();
}

PLDCompParser::StatementseqContext* PLDCompParser::IfstatementContext::statementseq(size_t i) {
  return getRuleContext<PLDCompParser::StatementseqContext>(i);
}

std::vector<tree::TerminalNode *> PLDCompParser::IfstatementContext::RIGHT_BRACE() {
  return getTokens(PLDCompParser::RIGHT_BRACE);
}

tree::TerminalNode* PLDCompParser::IfstatementContext::RIGHT_BRACE(size_t i) {
  return getToken(PLDCompParser::RIGHT_BRACE, i);
}

tree::TerminalNode* PLDCompParser::IfstatementContext::ELSE() {
  return getToken(PLDCompParser::ELSE, 0);
}


size_t PLDCompParser::IfstatementContext::getRuleIndex() const {
  return PLDCompParser::RuleIfstatement;
}


antlrcpp::Any PLDCompParser::IfstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitIfstatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::IfstatementContext* PLDCompParser::ifstatement() {
  IfstatementContext *_localctx = _tracker.createInstance<IfstatementContext>(_ctx, getState());
  enterRule(_localctx, 8, PLDCompParser::RuleIfstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(PLDCompParser::IF);
    setState(90);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(91);
    expr(0);
    setState(92);
    match(PLDCompParser::RIGHT_PARENTHESE);
    setState(93);
    match(PLDCompParser::LEFT_BRACE);
    setState(94);
    statementseq();
    setState(95);
    match(PLDCompParser::RIGHT_BRACE);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PLDCompParser::ELSE) {
      setState(96);
      match(PLDCompParser::ELSE);
      setState(97);
      match(PLDCompParser::LEFT_BRACE);
      setState(98);
      statementseq();
      setState(99);
      match(PLDCompParser::RIGHT_BRACE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhilestatementContext ------------------------------------------------------------------

PLDCompParser::WhilestatementContext::WhilestatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::WhilestatementContext::WHILE() {
  return getToken(PLDCompParser::WHILE, 0);
}

tree::TerminalNode* PLDCompParser::WhilestatementContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

PLDCompParser::ExprContext* PLDCompParser::WhilestatementContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::WhilestatementContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

tree::TerminalNode* PLDCompParser::WhilestatementContext::LEFT_BRACE() {
  return getToken(PLDCompParser::LEFT_BRACE, 0);
}

PLDCompParser::StatementseqContext* PLDCompParser::WhilestatementContext::statementseq() {
  return getRuleContext<PLDCompParser::StatementseqContext>(0);
}

tree::TerminalNode* PLDCompParser::WhilestatementContext::RIGHT_BRACE() {
  return getToken(PLDCompParser::RIGHT_BRACE, 0);
}


size_t PLDCompParser::WhilestatementContext::getRuleIndex() const {
  return PLDCompParser::RuleWhilestatement;
}


antlrcpp::Any PLDCompParser::WhilestatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitWhilestatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::WhilestatementContext* PLDCompParser::whilestatement() {
  WhilestatementContext *_localctx = _tracker.createInstance<WhilestatementContext>(_ctx, getState());
  enterRule(_localctx, 10, PLDCompParser::RuleWhilestatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(PLDCompParser::WHILE);
    setState(104);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(105);
    expr(0);
    setState(106);
    match(PLDCompParser::RIGHT_PARENTHESE);
    setState(107);
    match(PLDCompParser::LEFT_BRACE);
    setState(108);
    statementseq();
    setState(109);
    match(PLDCompParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForstatementContext ------------------------------------------------------------------

PLDCompParser::ForstatementContext::ForstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::ForstatementContext::LEFT_PARENTHESE() {
  return getToken(PLDCompParser::LEFT_PARENTHESE, 0);
}

std::vector<PLDCompParser::AssignmentstatContext *> PLDCompParser::ForstatementContext::assignmentstat() {
  return getRuleContexts<PLDCompParser::AssignmentstatContext>();
}

PLDCompParser::AssignmentstatContext* PLDCompParser::ForstatementContext::assignmentstat(size_t i) {
  return getRuleContext<PLDCompParser::AssignmentstatContext>(i);
}

std::vector<tree::TerminalNode *> PLDCompParser::ForstatementContext::SEMICOLON() {
  return getTokens(PLDCompParser::SEMICOLON);
}

tree::TerminalNode* PLDCompParser::ForstatementContext::SEMICOLON(size_t i) {
  return getToken(PLDCompParser::SEMICOLON, i);
}

PLDCompParser::ExprContext* PLDCompParser::ForstatementContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::ForstatementContext::RIGHT_PARENTHESE() {
  return getToken(PLDCompParser::RIGHT_PARENTHESE, 0);
}

PLDCompParser::StatementseqContext* PLDCompParser::ForstatementContext::statementseq() {
  return getRuleContext<PLDCompParser::StatementseqContext>(0);
}

tree::TerminalNode* PLDCompParser::ForstatementContext::RIGHT_BRACE() {
  return getToken(PLDCompParser::RIGHT_BRACE, 0);
}


size_t PLDCompParser::ForstatementContext::getRuleIndex() const {
  return PLDCompParser::RuleForstatement;
}


antlrcpp::Any PLDCompParser::ForstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitForstatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::ForstatementContext* PLDCompParser::forstatement() {
  ForstatementContext *_localctx = _tracker.createInstance<ForstatementContext>(_ctx, getState());
  enterRule(_localctx, 12, PLDCompParser::RuleForstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(PLDCompParser::T__0);
    setState(112);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(113);
    assignmentstat();
    setState(114);
    match(PLDCompParser::SEMICOLON);
    setState(115);
    expr(0);
    setState(116);
    match(PLDCompParser::SEMICOLON);
    setState(117);
    assignmentstat();
    setState(118);
    match(PLDCompParser::RIGHT_PARENTHESE);
    setState(119);
    match(PLDCompParser::T__1);
    setState(120);
    statementseq();
    setState(121);
    match(PLDCompParser::RIGHT_BRACE);
   
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
  enterRule(_localctx, 14, PLDCompParser::RuleCallstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    call();
    setState(124);
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

std::vector<tree::TerminalNode *> PLDCompParser::CallContext::COMMA() {
  return getTokens(PLDCompParser::COMMA);
}

tree::TerminalNode* PLDCompParser::CallContext::COMMA(size_t i) {
  return getToken(PLDCompParser::COMMA, i);
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
  enterRule(_localctx, 16, PLDCompParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(PLDCompParser::ID);
    setState(127);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCompParser::CHAR)
      | (1ULL << PLDCompParser::ID)
      | (1ULL << PLDCompParser::INT)
      | (1ULL << PLDCompParser::PLUSPLUS)
      | (1ULL << PLDCompParser::MINUSMINUS)
      | (1ULL << PLDCompParser::LEFT_PARENTHESE)
      | (1ULL << PLDCompParser::MINUS))) != 0)) {
      setState(128);
      expr(0);
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCompParser::COMMA) {
        setState(129);
        match(PLDCompParser::COMMA);
        setState(130);
        expr(0);
        setState(135);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(138);
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

std::vector<tree::TerminalNode *> PLDCompParser::DeclWithoutAssignmentContext::ID() {
  return getTokens(PLDCompParser::ID);
}

tree::TerminalNode* PLDCompParser::DeclWithoutAssignmentContext::ID(size_t i) {
  return getToken(PLDCompParser::ID, i);
}

tree::TerminalNode* PLDCompParser::DeclWithoutAssignmentContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> PLDCompParser::DeclWithoutAssignmentContext::COMMA() {
  return getTokens(PLDCompParser::COMMA);
}

tree::TerminalNode* PLDCompParser::DeclWithoutAssignmentContext::COMMA(size_t i) {
  return getToken(PLDCompParser::COMMA, i);
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
//----------------- DeclArrayContext ------------------------------------------------------------------

PLDCompParser::TypeContext* PLDCompParser::DeclArrayContext::type() {
  return getRuleContext<PLDCompParser::TypeContext>(0);
}

tree::TerminalNode* PLDCompParser::DeclArrayContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

tree::TerminalNode* PLDCompParser::DeclArrayContext::INT() {
  return getToken(PLDCompParser::INT, 0);
}

tree::TerminalNode* PLDCompParser::DeclArrayContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}

tree::TerminalNode* PLDCompParser::DeclArrayContext::ASSIGN() {
  return getToken(PLDCompParser::ASSIGN, 0);
}

tree::TerminalNode* PLDCompParser::DeclArrayContext::LEFT_BRACE() {
  return getToken(PLDCompParser::LEFT_BRACE, 0);
}

tree::TerminalNode* PLDCompParser::DeclArrayContext::RIGHT_BRACE() {
  return getToken(PLDCompParser::RIGHT_BRACE, 0);
}

std::vector<PLDCompParser::ExprContext *> PLDCompParser::DeclArrayContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::DeclArrayContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> PLDCompParser::DeclArrayContext::COMMA() {
  return getTokens(PLDCompParser::COMMA);
}

tree::TerminalNode* PLDCompParser::DeclArrayContext::COMMA(size_t i) {
  return getToken(PLDCompParser::COMMA, i);
}

PLDCompParser::DeclArrayContext::DeclArrayContext(VardeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::DeclArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDeclArray(this);
  else
    return visitor->visitChildren(this);
}
PLDCompParser::VardeclarationContext* PLDCompParser::vardeclaration() {
  VardeclarationContext *_localctx = _tracker.createInstance<VardeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, PLDCompParser::RuleVardeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(140);
      type();
      setState(141);
      match(PLDCompParser::ID);
      setState(142);
      match(PLDCompParser::ASSIGN);
      setState(143);
      expr(0);
      setState(144);
      match(PLDCompParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithoutAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(146);
      type();
      setState(147);
      match(PLDCompParser::ID);
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCompParser::COMMA) {
        setState(148);
        match(PLDCompParser::COMMA);
        setState(149);
        match(PLDCompParser::ID);
        setState(154);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(155);
      match(PLDCompParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclArrayContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(157);
      type();
      setState(158);
      match(PLDCompParser::ID);
      setState(159);
      match(PLDCompParser::T__2);
      setState(160);
      match(PLDCompParser::INT);
      setState(161);
      match(PLDCompParser::T__3);
      setState(175);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PLDCompParser::ASSIGN) {
        setState(162);
        match(PLDCompParser::ASSIGN);
        setState(163);
        match(PLDCompParser::LEFT_BRACE);
        setState(172);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << PLDCompParser::CHAR)
          | (1ULL << PLDCompParser::ID)
          | (1ULL << PLDCompParser::INT)
          | (1ULL << PLDCompParser::PLUSPLUS)
          | (1ULL << PLDCompParser::MINUSMINUS)
          | (1ULL << PLDCompParser::LEFT_PARENTHESE)
          | (1ULL << PLDCompParser::MINUS))) != 0)) {
          setState(164);
          expr(0);
          setState(169);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == PLDCompParser::COMMA) {
            setState(165);
            match(PLDCompParser::COMMA);
            setState(166);
            expr(0);
            setState(171);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(174);
        match(PLDCompParser::RIGHT_BRACE);
      }
      setState(177);
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

PLDCompParser::LvalueContext* PLDCompParser::AssignmentExprContext::lvalue() {
  return getRuleContext<PLDCompParser::LvalueContext>(0);
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
  enterRule(_localctx, 20, PLDCompParser::RuleAssignmentstat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AssignmentstatContext *>(_tracker.createInstance<PLDCompParser::AssignmentExprContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(181);
    lvalue();
    setState(182);
    match(PLDCompParser::ASSIGN);
    setState(183);
    expr(0);
    setState(184);
    match(PLDCompParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

PLDCompParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCompParser::LvalueContext::getRuleIndex() const {
  return PLDCompParser::RuleLvalue;
}

void PLDCompParser::LvalueContext::copyFrom(LvalueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdLContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::IdLContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

PLDCompParser::IdLContext::IdLContext(LvalueContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::IdLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitIdL(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayLContext ------------------------------------------------------------------

PLDCompParser::ArrayContext* PLDCompParser::ArrayLContext::array() {
  return getRuleContext<PLDCompParser::ArrayContext>(0);
}

PLDCompParser::ArrayLContext::ArrayLContext(LvalueContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::ArrayLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitArrayL(this);
  else
    return visitor->visitChildren(this);
}
PLDCompParser::LvalueContext* PLDCompParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 22, PLDCompParser::RuleLvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCompParser::IdLContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(186);
      match(PLDCompParser::ID);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCompParser::ArrayLContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(187);
      array();
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

//----------------- ArrayContext ------------------------------------------------------------------

PLDCompParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::ArrayContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

PLDCompParser::ExprContext* PLDCompParser::ArrayContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}


size_t PLDCompParser::ArrayContext::getRuleIndex() const {
  return PLDCompParser::RuleArray;
}


antlrcpp::Any PLDCompParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::ArrayContext* PLDCompParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 24, PLDCompParser::RuleArray);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(PLDCompParser::ID);
    setState(191);
    match(PLDCompParser::T__2);
    setState(192);
    expr(0);
    setState(193);
    match(PLDCompParser::T__3);
   
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
  enterRule(_localctx, 26, PLDCompParser::RuleReturnstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(PLDCompParser::RETURN);
    setState(196);
    expr(0);
    setState(197);
    match(PLDCompParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrdecrstatementContext ------------------------------------------------------------------

PLDCompParser::IncrdecrstatementContext::IncrdecrstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::Incr_decrContext* PLDCompParser::IncrdecrstatementContext::incr_decr() {
  return getRuleContext<PLDCompParser::Incr_decrContext>(0);
}

tree::TerminalNode* PLDCompParser::IncrdecrstatementContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}


size_t PLDCompParser::IncrdecrstatementContext::getRuleIndex() const {
  return PLDCompParser::RuleIncrdecrstatement;
}


antlrcpp::Any PLDCompParser::IncrdecrstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitIncrdecrstatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::IncrdecrstatementContext* PLDCompParser::incrdecrstatement() {
  IncrdecrstatementContext *_localctx = _tracker.createInstance<IncrdecrstatementContext>(_ctx, getState());
  enterRule(_localctx, 28, PLDCompParser::RuleIncrdecrstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    incr_decr();
    setState(200);
    match(PLDCompParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Incr_decrContext ------------------------------------------------------------------

PLDCompParser::Incr_decrContext::Incr_decrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::Incr_decr_opContext* PLDCompParser::Incr_decrContext::incr_decr_op() {
  return getRuleContext<PLDCompParser::Incr_decr_opContext>(0);
}

tree::TerminalNode* PLDCompParser::Incr_decrContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

PLDCompParser::ArrayContext* PLDCompParser::Incr_decrContext::array() {
  return getRuleContext<PLDCompParser::ArrayContext>(0);
}


size_t PLDCompParser::Incr_decrContext::getRuleIndex() const {
  return PLDCompParser::RuleIncr_decr;
}


antlrcpp::Any PLDCompParser::Incr_decrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitIncr_decr(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::Incr_decrContext* PLDCompParser::incr_decr() {
  Incr_decrContext *_localctx = _tracker.createInstance<Incr_decrContext>(_ctx, getState());
  enterRule(_localctx, 30, PLDCompParser::RuleIncr_decr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCompParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(204);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          setState(202);
          match(PLDCompParser::ID);
          break;
        }

        case 2: {
          setState(203);
          array();
          break;
        }

        }
        setState(206);
        incr_decr_op();
        break;
      }

      case PLDCompParser::PLUSPLUS:
      case PLDCompParser::MINUSMINUS: {
        enterOuterAlt(_localctx, 2);
        setState(207);
        incr_decr_op();
        setState(210);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(208);
          match(PLDCompParser::ID);
          break;
        }

        case 2: {
          setState(209);
          array();
          break;
        }

        }
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

//----------------- Incr_decr_opContext ------------------------------------------------------------------

PLDCompParser::Incr_decr_opContext::Incr_decr_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::Incr_decr_opContext::PLUSPLUS() {
  return getToken(PLDCompParser::PLUSPLUS, 0);
}

tree::TerminalNode* PLDCompParser::Incr_decr_opContext::MINUSMINUS() {
  return getToken(PLDCompParser::MINUSMINUS, 0);
}


size_t PLDCompParser::Incr_decr_opContext::getRuleIndex() const {
  return PLDCompParser::RuleIncr_decr_op;
}


antlrcpp::Any PLDCompParser::Incr_decr_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitIncr_decr_op(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::Incr_decr_opContext* PLDCompParser::incr_decr_op() {
  Incr_decr_opContext *_localctx = _tracker.createInstance<Incr_decr_opContext>(_ctx, getState());
  enterRule(_localctx, 32, PLDCompParser::RuleIncr_decr_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    _la = _input->LA(1);
    if (!(_la == PLDCompParser::PLUSPLUS

    || _la == PLDCompParser::MINUSMINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundassignmentContext ------------------------------------------------------------------

PLDCompParser::CompoundassignmentContext::CompoundassignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::ExprContext* PLDCompParser::CompoundassignmentContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

PLDCompParser::ArrayContext* PLDCompParser::CompoundassignmentContext::array() {
  return getRuleContext<PLDCompParser::ArrayContext>(0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::ADDE() {
  return getToken(PLDCompParser::ADDE, 0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::SUBE() {
  return getToken(PLDCompParser::SUBE, 0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::MULE() {
  return getToken(PLDCompParser::MULE, 0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::DIVE() {
  return getToken(PLDCompParser::DIVE, 0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::ORE() {
  return getToken(PLDCompParser::ORE, 0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::ANDE() {
  return getToken(PLDCompParser::ANDE, 0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::XORE() {
  return getToken(PLDCompParser::XORE, 0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentContext::MODE() {
  return getToken(PLDCompParser::MODE, 0);
}


size_t PLDCompParser::CompoundassignmentContext::getRuleIndex() const {
  return PLDCompParser::RuleCompoundassignment;
}


antlrcpp::Any PLDCompParser::CompoundassignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitCompoundassignment(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::CompoundassignmentContext* PLDCompParser::compoundassignment() {
  CompoundassignmentContext *_localctx = _tracker.createInstance<CompoundassignmentContext>(_ctx, getState());
  enterRule(_localctx, 34, PLDCompParser::RuleCompoundassignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(216);
      match(PLDCompParser::ID);
      break;
    }

    case 2: {
      setState(217);
      array();
      break;
    }

    }
    setState(220);
    dynamic_cast<CompoundassignmentContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCompParser::ADDE)
      | (1ULL << PLDCompParser::SUBE)
      | (1ULL << PLDCompParser::MULE)
      | (1ULL << PLDCompParser::DIVE)
      | (1ULL << PLDCompParser::MODE)
      | (1ULL << PLDCompParser::ORE)
      | (1ULL << PLDCompParser::XORE)
      | (1ULL << PLDCompParser::ANDE))) != 0))) {
      dynamic_cast<CompoundassignmentContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(221);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundassignmentstatementContext ------------------------------------------------------------------

PLDCompParser::CompoundassignmentstatementContext::CompoundassignmentstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCompParser::CompoundassignmentContext* PLDCompParser::CompoundassignmentstatementContext::compoundassignment() {
  return getRuleContext<PLDCompParser::CompoundassignmentContext>(0);
}

tree::TerminalNode* PLDCompParser::CompoundassignmentstatementContext::SEMICOLON() {
  return getToken(PLDCompParser::SEMICOLON, 0);
}


size_t PLDCompParser::CompoundassignmentstatementContext::getRuleIndex() const {
  return PLDCompParser::RuleCompoundassignmentstatement;
}


antlrcpp::Any PLDCompParser::CompoundassignmentstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitCompoundassignmentstatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::CompoundassignmentstatementContext* PLDCompParser::compoundassignmentstatement() {
  CompoundassignmentstatementContext *_localctx = _tracker.createInstance<CompoundassignmentstatementContext>(_ctx, getState());
  enterRule(_localctx, 36, PLDCompParser::RuleCompoundassignmentstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    compoundassignment();
    setState(224);
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
//----------------- CharConstContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::CharConstContext::CHAR() {
  return getToken(PLDCompParser::CHAR, 0);
}

PLDCompParser::CharConstContext::CharConstContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::CharConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitCharConst(this);
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
//----------------- NegExprContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::NegExprContext::MINUS() {
  return getToken(PLDCompParser::MINUS, 0);
}

PLDCompParser::ExprContext* PLDCompParser::NegExprContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
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
//----------------- Rel2ExprContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::Rel2ExprContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::Rel2ExprContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::Rel2ExprContext::EQUAL() {
  return getToken(PLDCompParser::EQUAL, 0);
}

tree::TerminalNode* PLDCompParser::Rel2ExprContext::NOTEQUAL() {
  return getToken(PLDCompParser::NOTEQUAL, 0);
}

PLDCompParser::Rel2ExprContext::Rel2ExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::Rel2ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitRel2Expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalOrContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::LogicalOrContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::LogicalOrContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::LogicalOrContext::OROR() {
  return getToken(PLDCompParser::OROR, 0);
}

PLDCompParser::LogicalOrContext::LogicalOrContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::LogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitLogicalOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayExprContext ------------------------------------------------------------------

PLDCompParser::ArrayContext* PLDCompParser::ArrayExprContext::array() {
  return getRuleContext<PLDCompParser::ArrayContext>(0);
}

PLDCompParser::ArrayExprContext::ArrayExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::ArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitwiseXorContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::BitwiseXorContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::BitwiseXorContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::BitwiseXorContext::CARET() {
  return getToken(PLDCompParser::CARET, 0);
}

PLDCompParser::BitwiseXorContext::BitwiseXorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::BitwiseXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitBitwiseXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitwiseOrContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::BitwiseOrContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::BitwiseOrContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::BitwiseOrContext::OR() {
  return getToken(PLDCompParser::OR, 0);
}

PLDCompParser::BitwiseOrContext::BitwiseOrContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::BitwiseOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitBitwiseOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShiftOpContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::ShiftOpContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::ShiftOpContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::ShiftOpContext::SHIFTR() {
  return getToken(PLDCompParser::SHIFTR, 0);
}

tree::TerminalNode* PLDCompParser::ShiftOpContext::SHIFTL() {
  return getToken(PLDCompParser::SHIFTL, 0);
}

PLDCompParser::ShiftOpContext::ShiftOpContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::ShiftOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitShiftOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalAndContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::LogicalAndContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::LogicalAndContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::LogicalAndContext::ANDAND() {
  return getToken(PLDCompParser::ANDAND, 0);
}

PLDCompParser::LogicalAndContext::LogicalAndContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::LogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompoundAssignmentExprContext ------------------------------------------------------------------

PLDCompParser::CompoundassignmentContext* PLDCompParser::CompoundAssignmentExprContext::compoundassignment() {
  return getRuleContext<PLDCompParser::CompoundassignmentContext>(0);
}

PLDCompParser::CompoundAssignmentExprContext::CompoundAssignmentExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::CompoundAssignmentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitCompoundAssignmentExpr(this);
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
//----------------- BitwiseAndContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::BitwiseAndContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::BitwiseAndContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::BitwiseAndContext::AND() {
  return getToken(PLDCompParser::AND, 0);
}

PLDCompParser::BitwiseAndContext::BitwiseAndContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::BitwiseAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitBitwiseAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rel1ExprContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::Rel1ExprContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::Rel1ExprContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

tree::TerminalNode* PLDCompParser::Rel1ExprContext::GREATER() {
  return getToken(PLDCompParser::GREATER, 0);
}

tree::TerminalNode* PLDCompParser::Rel1ExprContext::LESS() {
  return getToken(PLDCompParser::LESS, 0);
}

tree::TerminalNode* PLDCompParser::Rel1ExprContext::GREATEREQUAL() {
  return getToken(PLDCompParser::GREATEREQUAL, 0);
}

tree::TerminalNode* PLDCompParser::Rel1ExprContext::LESSEQUAL() {
  return getToken(PLDCompParser::LESSEQUAL, 0);
}

PLDCompParser::Rel1ExprContext::Rel1ExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::Rel1ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitRel1Expr(this);
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
//----------------- IncDecExprContext ------------------------------------------------------------------

PLDCompParser::Incr_decrContext* PLDCompParser::IncDecExprContext::incr_decr() {
  return getRuleContext<PLDCompParser::Incr_decrContext>(0);
}

PLDCompParser::IncDecExprContext::IncDecExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::IncDecExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitIncDecExpr(this);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, PLDCompParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(227);
      match(PLDCompParser::LEFT_PARENTHESE);
      setState(228);
      expr(0);
      setState(229);
      match(PLDCompParser::RIGHT_PARENTHESE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(231);
      array();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(232);
      match(PLDCompParser::MINUS);
      setState(233);
      expr(18);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IncDecExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(234);
      incr_decr();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(235);
      call();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CompoundAssignmentExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(236);
      compoundassignment();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(237);
      match(PLDCompParser::INT);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NegConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(238);
      match(PLDCompParser::MINUS);
      setState(239);
      match(PLDCompParser::INT);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CharConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(240);
      match(PLDCompParser::CHAR);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(241);
      match(PLDCompParser::ID);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(276);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(274);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(244);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(245);
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
          setState(246);
          expr(16);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(247);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(248);
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
          setState(249);
          expr(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ShiftOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(250);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(251);
          dynamic_cast<ShiftOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PLDCompParser::SHIFTL

          || _la == PLDCompParser::SHIFTR)) {
            dynamic_cast<ShiftOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(252);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Rel1ExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(253);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(254);
          dynamic_cast<Rel1ExprContext *>(_localctx)->relop = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PLDCompParser::LESS)
            | (1ULL << PLDCompParser::LESSEQUAL)
            | (1ULL << PLDCompParser::GREATER)
            | (1ULL << PLDCompParser::GREATEREQUAL))) != 0))) {
            dynamic_cast<Rel1ExprContext *>(_localctx)->relop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(255);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Rel2ExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(256);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(257);
          dynamic_cast<Rel2ExprContext *>(_localctx)->relop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PLDCompParser::EQUAL

          || _la == PLDCompParser::NOTEQUAL)) {
            dynamic_cast<Rel2ExprContext *>(_localctx)->relop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(258);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BitwiseAndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(259);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(260);
          match(PLDCompParser::AND);
          setState(261);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BitwiseXorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(262);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(263);
          match(PLDCompParser::CARET);
          setState(264);
          expr(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitwiseOrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(265);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(266);
          match(PLDCompParser::OR);
          setState(267);
          expr(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LogicalAndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(268);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(269);
          match(PLDCompParser::ANDAND);
          setState(270);
          expr(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<LogicalOrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(271);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(272);
          match(PLDCompParser::OROR);
          setState(273);
          expr(7);
          break;
        }

        } 
      }
      setState(278);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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

tree::TerminalNode* PLDCompParser::TypeContext::INT32_TYPE() {
  return getToken(PLDCompParser::INT32_TYPE, 0);
}

tree::TerminalNode* PLDCompParser::TypeContext::CHAR_TYPE() {
  return getToken(PLDCompParser::CHAR_TYPE, 0);
}

tree::TerminalNode* PLDCompParser::TypeContext::VOID_TYPE() {
  return getToken(PLDCompParser::VOID_TYPE, 0);
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
  enterRule(_localctx, 40, PLDCompParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCompParser::INT_TYPE)
      | (1ULL << PLDCompParser::INT32_TYPE)
      | (1ULL << PLDCompParser::CHAR_TYPE)
      | (1ULL << PLDCompParser::VOID_TYPE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
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
    case 19: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PLDCompParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);

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
  "prog", "functiondefinition", "statementseq", "statement", "ifstatement", 
  "whilestatement", "forstatement", "callstatement", "call", "vardeclaration", 
  "assignmentstat", "lvalue", "array", "returnstatement", "incrdecrstatement", 
  "incr_decr", "incr_decr_op", "compoundassignment", "compoundassignmentstatement", 
  "expr", "type"
};

std::vector<std::string> PLDCompParser::_literalNames = {
  "", "'for'", "'{ '", "'['", "']'", "'return'", "'int'", "'int32_t'", "'char'", 
  "'void'", "'if'", "'else'", "'while'", "", "", "", "'<'", "'<='", "'>'", 
  "'>='", "'=='", "'!='", "'++'", "'--'", "'<<'", "'>>'", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'|='", "'^='", "'&='", "'&'", "'|'", "'&&'", 
  "'||'", "'^'", "'~'", "'''", "'\\'", "'='", "';'", "','", "'}'", "'{'", 
  "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> PLDCompParser::_symbolicNames = {
  "", "", "", "", "", "RETURN", "INT_TYPE", "INT32_TYPE", "CHAR_TYPE", "VOID_TYPE", 
  "IF", "ELSE", "WHILE", "CHAR", "ID", "INT", "LESS", "LESSEQUAL", "GREATER", 
  "GREATEREQUAL", "EQUAL", "NOTEQUAL", "PLUSPLUS", "MINUSMINUS", "SHIFTL", 
  "SHIFTR", "ADDE", "SUBE", "MULE", "DIVE", "MODE", "ORE", "XORE", "ANDE", 
  "AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", "PRIME", "BACKSLASH", 
  "ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", 
  "RIGHT_PARENTHESE", "PLUS", "MINUS", "STAR", "DIV", "MOD", "WHITESPACE", 
  "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", "DIRECTIVE", "ERROR"
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
    0x3, 0x3d, 0x11c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 0x7, 0x2, 0x2e, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x31, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x3e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x41, 0xb, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x44, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x7, 0x4, 0x4c, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x4f, 
    0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x5a, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x68, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x86, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x89, 0xb, 0xa, 0x5, 0xa, 0x8b, 
    0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 
    0x99, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x9c, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xaa, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0xad, 0xb, 0xb, 0x5, 0xb, 0xaf, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0xb2, 
    0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xb6, 0xa, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xbf, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xcf, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xd5, 0xa, 0x11, 0x5, 0x11, 0xd7, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xdd, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xf5, 0xa, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x115, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x118, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x2, 0x3, 
    0x28, 0x17, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2, 0xa, 
    0x3, 0x2, 0x18, 0x19, 0x3, 0x2, 0x1c, 0x23, 0x3, 0x2, 0x35, 0x37, 0x3, 
    0x2, 0x33, 0x34, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x12, 0x15, 0x3, 0x2, 
    0x16, 0x17, 0x3, 0x2, 0x8, 0xb, 0x2, 0x134, 0x2, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x34, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x71, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x80, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x20, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0x24, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x2e, 0x5, 0x4, 0x3, 0x2, 0x2d, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x2, 0x2, 0x3, 0x33, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x5, 0x2a, 0x16, 0x2, 0x35, 0x36, 
    0x7, 0x10, 0x2, 0x2, 0x36, 0x43, 0x7, 0x31, 0x2, 0x2, 0x37, 0x38, 0x5, 
    0x2a, 0x16, 0x2, 0x38, 0x3f, 0x7, 0x10, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x2e, 
    0x2, 0x2, 0x3a, 0x3b, 0x5, 0x2a, 0x16, 0x2, 0x3b, 0x3c, 0x7, 0x10, 0x2, 
    0x2, 0x3c, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x44, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x7, 0xb, 0x2, 0x2, 0x43, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x32, 0x2, 
    0x2, 0x46, 0x47, 0x7, 0x30, 0x2, 0x2, 0x47, 0x48, 0x5, 0x6, 0x4, 0x2, 
    0x48, 0x49, 0x7, 0x2f, 0x2, 0x2, 0x49, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x4c, 0x5, 0x8, 0x5, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x5a, 0x5, 0x14, 0xb, 0x2, 0x51, 0x5a, 0x5, 0xa, 0x6, 
    0x2, 0x52, 0x5a, 0x5, 0xc, 0x7, 0x2, 0x53, 0x5a, 0x5, 0xe, 0x8, 0x2, 
    0x54, 0x5a, 0x5, 0x10, 0x9, 0x2, 0x55, 0x5a, 0x5, 0x1c, 0xf, 0x2, 0x56, 
    0x5a, 0x5, 0x16, 0xc, 0x2, 0x57, 0x5a, 0x5, 0x1e, 0x10, 0x2, 0x58, 0x5a, 
    0x5, 0x26, 0x14, 0x2, 0x59, 0x50, 0x3, 0x2, 0x2, 0x2, 0x59, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x52, 0x3, 0x2, 0x2, 0x2, 0x59, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x54, 0x3, 0x2, 0x2, 0x2, 0x59, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5c, 0x7, 0xc, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x31, 0x2, 0x2, 0x5d, 0x5e, 
    0x5, 0x28, 0x15, 0x2, 0x5e, 0x5f, 0x7, 0x32, 0x2, 0x2, 0x5f, 0x60, 0x7, 
    0x30, 0x2, 0x2, 0x60, 0x61, 0x5, 0x6, 0x4, 0x2, 0x61, 0x67, 0x7, 0x2f, 
    0x2, 0x2, 0x62, 0x63, 0x7, 0xd, 0x2, 0x2, 0x63, 0x64, 0x7, 0x30, 0x2, 
    0x2, 0x64, 0x65, 0x5, 0x6, 0x4, 0x2, 0x65, 0x66, 0x7, 0x2f, 0x2, 0x2, 
    0x66, 0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x62, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0xb, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x7, 0xe, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x31, 0x2, 0x2, 0x6b, 0x6c, 0x5, 
    0x28, 0x15, 0x2, 0x6c, 0x6d, 0x7, 0x32, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x30, 
    0x2, 0x2, 0x6e, 0x6f, 0x5, 0x6, 0x4, 0x2, 0x6f, 0x70, 0x7, 0x2f, 0x2, 
    0x2, 0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x3, 0x2, 0x2, 
    0x72, 0x73, 0x7, 0x31, 0x2, 0x2, 0x73, 0x74, 0x5, 0x16, 0xc, 0x2, 0x74, 
    0x75, 0x7, 0x2d, 0x2, 0x2, 0x75, 0x76, 0x5, 0x28, 0x15, 0x2, 0x76, 0x77, 
    0x7, 0x2d, 0x2, 0x2, 0x77, 0x78, 0x5, 0x16, 0xc, 0x2, 0x78, 0x79, 0x7, 
    0x32, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x4, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x6, 
    0x4, 0x2, 0x7b, 0x7c, 0x7, 0x2f, 0x2, 0x2, 0x7c, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x5, 0x12, 0xa, 0x2, 0x7e, 0x7f, 0x7, 0x2d, 0x2, 0x2, 
    0x7f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x10, 0x2, 0x2, 0x81, 
    0x8a, 0x7, 0x31, 0x2, 0x2, 0x82, 0x87, 0x5, 0x28, 0x15, 0x2, 0x83, 0x84, 
    0x7, 0x2e, 0x2, 0x2, 0x84, 0x86, 0x5, 0x28, 0x15, 0x2, 0x85, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8d, 0x7, 0x32, 0x2, 0x2, 0x8d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
    0x5, 0x2a, 0x16, 0x2, 0x8f, 0x90, 0x7, 0x10, 0x2, 0x2, 0x90, 0x91, 0x7, 
    0x2c, 0x2, 0x2, 0x91, 0x92, 0x5, 0x28, 0x15, 0x2, 0x92, 0x93, 0x7, 0x2d, 
    0x2, 0x2, 0x93, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x5, 0x2a, 0x16, 
    0x2, 0x95, 0x9a, 0x7, 0x10, 0x2, 0x2, 0x96, 0x97, 0x7, 0x2e, 0x2, 0x2, 
    0x97, 0x99, 0x7, 0x10, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x2d, 0x2, 0x2, 0x9e, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0xa0, 0x5, 0x2a, 0x16, 0x2, 0xa0, 0xa1, 0x7, 0x10, 0x2, 
    0x2, 0xa1, 0xa2, 0x7, 0x5, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x11, 0x2, 0x2, 
    0xa3, 0xb1, 0x7, 0x6, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x2c, 0x2, 0x2, 0xa5, 
    0xae, 0x7, 0x30, 0x2, 0x2, 0xa6, 0xab, 0x5, 0x28, 0x15, 0x2, 0xa7, 0xa8, 
    0x7, 0x2e, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x28, 0x15, 0x2, 0xa9, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb2, 0x7, 0x2f, 0x2, 0x2, 0xb1, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 
    0x2d, 0x2, 0x2, 0xb4, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0x94, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0x18, 0xd, 0x2, 
    0xb8, 0xb9, 0x7, 0x2c, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x28, 0x15, 0x2, 0xba, 
    0xbb, 0x7, 0x2d, 0x2, 0x2, 0xbb, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 
    0x7, 0x10, 0x2, 0x2, 0xbd, 0xbf, 0x5, 0x1a, 0xe, 0x2, 0xbe, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xc1, 0x7, 0x10, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x5, 0x2, 
    0x2, 0xc2, 0xc3, 0x5, 0x28, 0x15, 0x2, 0xc3, 0xc4, 0x7, 0x6, 0x2, 0x2, 
    0xc4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x7, 0x2, 0x2, 0xc6, 
    0xc7, 0x5, 0x28, 0x15, 0x2, 0xc7, 0xc8, 0x7, 0x2d, 0x2, 0x2, 0xc8, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x20, 0x11, 0x2, 0xca, 0xcb, 0x7, 
    0x2d, 0x2, 0x2, 0xcb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcf, 0x7, 0x10, 
    0x2, 0x2, 0xcd, 0xcf, 0x5, 0x1a, 0xe, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd7, 0x5, 0x22, 0x12, 0x2, 0xd1, 0xd4, 0x5, 0x22, 0x12, 0x2, 
    0xd2, 0xd5, 0x7, 0x10, 0x2, 0x2, 0xd3, 0xd5, 0x5, 0x1a, 0xe, 0x2, 0xd4, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xd7, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x9, 0x2, 
    0x2, 0x2, 0xd9, 0x23, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x7, 0x10, 0x2, 
    0x2, 0xdb, 0xdd, 0x5, 0x1a, 0xe, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x9, 0x3, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x28, 0x15, 0x2, 0xe0, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x24, 0x13, 0x2, 0xe2, 0xe3, 0x7, 
    0x2d, 0x2, 0x2, 0xe3, 0x27, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x8, 0x15, 
    0x1, 0x2, 0xe5, 0xe6, 0x7, 0x31, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x28, 0x15, 
    0x2, 0xe7, 0xe8, 0x7, 0x32, 0x2, 0x2, 0xe8, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xf5, 0x5, 0x1a, 0xe, 0x2, 0xea, 0xeb, 0x7, 0x34, 0x2, 0x2, 0xeb, 
    0xf5, 0x5, 0x28, 0x15, 0x14, 0xec, 0xf5, 0x5, 0x20, 0x11, 0x2, 0xed, 
    0xf5, 0x5, 0x12, 0xa, 0x2, 0xee, 0xf5, 0x5, 0x24, 0x13, 0x2, 0xef, 0xf5, 
    0x7, 0x11, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x34, 0x2, 0x2, 0xf1, 0xf5, 0x7, 
    0x11, 0x2, 0x2, 0xf2, 0xf5, 0x7, 0xf, 0x2, 0x2, 0xf3, 0xf5, 0x7, 0x10, 
    0x2, 0x2, 0xf4, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf7, 0xc, 0x11, 0x2, 0x2, 0xf7, 0xf8, 0x9, 0x4, 
    0x2, 0x2, 0xf8, 0x115, 0x5, 0x28, 0x15, 0x12, 0xf9, 0xfa, 0xc, 0x10, 
    0x2, 0x2, 0xfa, 0xfb, 0x9, 0x5, 0x2, 0x2, 0xfb, 0x115, 0x5, 0x28, 0x15, 
    0x11, 0xfc, 0xfd, 0xc, 0xf, 0x2, 0x2, 0xfd, 0xfe, 0x9, 0x6, 0x2, 0x2, 
    0xfe, 0x115, 0x5, 0x28, 0x15, 0x10, 0xff, 0x100, 0xc, 0xe, 0x2, 0x2, 
    0x100, 0x101, 0x9, 0x7, 0x2, 0x2, 0x101, 0x115, 0x5, 0x28, 0x15, 0xf, 
    0x102, 0x103, 0xc, 0xd, 0x2, 0x2, 0x103, 0x104, 0x9, 0x8, 0x2, 0x2, 
    0x104, 0x115, 0x5, 0x28, 0x15, 0xe, 0x105, 0x106, 0xc, 0xc, 0x2, 0x2, 
    0x106, 0x107, 0x7, 0x24, 0x2, 0x2, 0x107, 0x115, 0x5, 0x28, 0x15, 0xd, 
    0x108, 0x109, 0xc, 0xb, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x28, 0x2, 0x2, 
    0x10a, 0x115, 0x5, 0x28, 0x15, 0xc, 0x10b, 0x10c, 0xc, 0xa, 0x2, 0x2, 
    0x10c, 0x10d, 0x7, 0x25, 0x2, 0x2, 0x10d, 0x115, 0x5, 0x28, 0x15, 0xb, 
    0x10e, 0x10f, 0xc, 0x9, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x26, 0x2, 0x2, 
    0x110, 0x115, 0x5, 0x28, 0x15, 0xa, 0x111, 0x112, 0xc, 0x8, 0x2, 0x2, 
    0x112, 0x113, 0x7, 0x27, 0x2, 0x2, 0x113, 0x115, 0x5, 0x28, 0x15, 0x9, 
    0x114, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x114, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0xfc, 0x3, 0x2, 0x2, 0x2, 0x114, 0xff, 0x3, 0x2, 0x2, 0x2, 0x114, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x105, 0x3, 0x2, 0x2, 0x2, 0x114, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x114, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x111, 0x3, 0x2, 0x2, 0x2, 0x115, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x29, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x11a, 0x9, 0x9, 0x2, 0x2, 0x11a, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x2f, 0x3f, 0x43, 0x4d, 0x59, 0x67, 0x87, 0x8a, 0x9a, 
    0xab, 0xae, 0xb1, 0xb5, 0xbe, 0xce, 0xd4, 0xd6, 0xdc, 0xf4, 0x114, 0x116, 
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
