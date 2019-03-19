
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
    setState(20);
    declaration();
    setState(21);
    match(PLDCompParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

PLDCompParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCompParser::OpContext::getRuleIndex() const {
  return PLDCompParser::RuleOp;
}

void PLDCompParser::OpContext::copyFrom(OpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

PLDCompParser::DivContext::DivContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddContext ------------------------------------------------------------------

PLDCompParser::AddContext::AddContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

PLDCompParser::MultContext::MultContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

PLDCompParser::ModContext::ModContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddeqContext ------------------------------------------------------------------

PLDCompParser::AddeqContext::AddeqContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::AddeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitAddeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubstracteqContext ------------------------------------------------------------------

PLDCompParser::SubstracteqContext::SubstracteqContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::SubstracteqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitSubstracteq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModeqContext ------------------------------------------------------------------

PLDCompParser::ModeqContext::ModeqContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::ModeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitModeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubstractContext ------------------------------------------------------------------

PLDCompParser::SubstractContext::SubstractContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::SubstractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitSubstract(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulteqContext ------------------------------------------------------------------

PLDCompParser::MulteqContext::MulteqContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::MulteqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitMulteq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiveqContext ------------------------------------------------------------------

PLDCompParser::DiveqContext::DiveqContext(OpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::DiveqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDiveq(this);
  else
    return visitor->visitChildren(this);
}
PLDCompParser::OpContext* PLDCompParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 2, PLDCompParser::RuleOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(33);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCompParser::T__0: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::MultContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(23);
        match(PLDCompParser::T__0);
        break;
      }

      case PLDCompParser::T__1: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::DivContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(24);
        match(PLDCompParser::T__1);
        break;
      }

      case PLDCompParser::T__2: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::ModContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(25);
        match(PLDCompParser::T__2);
        break;
      }

      case PLDCompParser::T__3: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::AddContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(26);
        match(PLDCompParser::T__3);
        break;
      }

      case PLDCompParser::T__4: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::SubstractContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(27);
        match(PLDCompParser::T__4);
        break;
      }

      case PLDCompParser::T__5: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::AddeqContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(28);
        match(PLDCompParser::T__5);
        break;
      }

      case PLDCompParser::T__6: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::SubstracteqContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(29);
        match(PLDCompParser::T__6);
        break;
      }

      case PLDCompParser::T__7: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::MulteqContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(30);
        match(PLDCompParser::T__7);
        break;
      }

      case PLDCompParser::T__8: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::DiveqContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(31);
        match(PLDCompParser::T__8);
        break;
      }

      case PLDCompParser::T__9: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCompParser::ModeqContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(32);
        match(PLDCompParser::T__9);
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
  enterRule(_localctx, 4, PLDCompParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    type();
    setState(36);
    match(PLDCompParser::ID);
    setState(37);
    match(PLDCompParser::LEFT_PARENTHESE);
    setState(38);
    match(PLDCompParser::RIGHT_PARENTHESE);
    setState(39);
    match(PLDCompParser::LEFT_BRACE);
    setState(40);
    statementseq();
    setState(41);
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

std::vector<tree::TerminalNode *> PLDCompParser::StatementseqContext::SEMICOLON() {
  return getTokens(PLDCompParser::SEMICOLON);
}

tree::TerminalNode* PLDCompParser::StatementseqContext::SEMICOLON(size_t i) {
  return getToken(PLDCompParser::SEMICOLON, i);
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
  enterRule(_localctx, 6, PLDCompParser::RuleStatementseq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(43);
      statement();
      setState(44);
      match(PLDCompParser::SEMICOLON);
      setState(48); 
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
  enterRule(_localctx, 8, PLDCompParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCompParser::INT_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(50);
        vardeclaration();
        break;
      }

      case PLDCompParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(51);
        returnstatement();
        break;
      }

      case PLDCompParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(52);
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

PLDCompParser::DeclWithoutAssignmentContext::DeclWithoutAssignmentContext(VardeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::DeclWithoutAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDeclWithoutAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclWithAssignmentIDContext ------------------------------------------------------------------

PLDCompParser::TypeContext* PLDCompParser::DeclWithAssignmentIDContext::type() {
  return getRuleContext<PLDCompParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> PLDCompParser::DeclWithAssignmentIDContext::ID() {
  return getTokens(PLDCompParser::ID);
}

tree::TerminalNode* PLDCompParser::DeclWithAssignmentIDContext::ID(size_t i) {
  return getToken(PLDCompParser::ID, i);
}

tree::TerminalNode* PLDCompParser::DeclWithAssignmentIDContext::ASSIGNMENT() {
  return getToken(PLDCompParser::ASSIGNMENT, 0);
}

PLDCompParser::DeclWithAssignmentIDContext::DeclWithAssignmentIDContext(VardeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::DeclWithAssignmentIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitDeclWithAssignmentID(this);
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

tree::TerminalNode* PLDCompParser::DeclWithAssignmentContext::ASSIGNMENT() {
  return getToken(PLDCompParser::ASSIGNMENT, 0);
}

PLDCompParser::ExprContext* PLDCompParser::DeclWithAssignmentContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
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
  enterRule(_localctx, 10, PLDCompParser::RuleVardeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithoutAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(55);
      type();
      setState(56);
      match(PLDCompParser::ID);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(58);
      type();
      setState(59);
      match(PLDCompParser::ID);
      setState(60);
      match(PLDCompParser::ASSIGNMENT);
      setState(61);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VardeclarationContext *>(_tracker.createInstance<PLDCompParser::DeclWithAssignmentIDContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(63);
      type();
      setState(64);
      match(PLDCompParser::ID);
      setState(65);
      match(PLDCompParser::ASSIGNMENT);
      setState(66);
      match(PLDCompParser::ID);
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

//----------------- AssignmentIDContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> PLDCompParser::AssignmentIDContext::ID() {
  return getTokens(PLDCompParser::ID);
}

tree::TerminalNode* PLDCompParser::AssignmentIDContext::ID(size_t i) {
  return getToken(PLDCompParser::ID, i);
}

tree::TerminalNode* PLDCompParser::AssignmentIDContext::ASSIGNMENT() {
  return getToken(PLDCompParser::ASSIGNMENT, 0);
}

PLDCompParser::AssignmentIDContext::AssignmentIDContext(AssignmentstatContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::AssignmentIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitAssignmentID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentINTContext ------------------------------------------------------------------

tree::TerminalNode* PLDCompParser::AssignmentINTContext::ID() {
  return getToken(PLDCompParser::ID, 0);
}

tree::TerminalNode* PLDCompParser::AssignmentINTContext::ASSIGNMENT() {
  return getToken(PLDCompParser::ASSIGNMENT, 0);
}

tree::TerminalNode* PLDCompParser::AssignmentINTContext::INT() {
  return getToken(PLDCompParser::INT, 0);
}

PLDCompParser::AssignmentINTContext::AssignmentINTContext(AssignmentstatContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::AssignmentINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitAssignmentINT(this);
  else
    return visitor->visitChildren(this);
}
PLDCompParser::AssignmentstatContext* PLDCompParser::assignmentstat() {
  AssignmentstatContext *_localctx = _tracker.createInstance<AssignmentstatContext>(_ctx, getState());
  enterRule(_localctx, 12, PLDCompParser::RuleAssignmentstat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignmentstatContext *>(_tracker.createInstance<PLDCompParser::AssignmentINTContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(70);
      match(PLDCompParser::ID);
      setState(71);
      match(PLDCompParser::ASSIGNMENT);
      setState(72);
      match(PLDCompParser::INT);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignmentstatContext *>(_tracker.createInstance<PLDCompParser::AssignmentIDContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(73);
      match(PLDCompParser::ID);
      setState(74);
      match(PLDCompParser::ASSIGNMENT);
      setState(75);
      match(PLDCompParser::ID);
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
  enterRule(_localctx, 14, PLDCompParser::RuleReturnstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(PLDCompParser::RETURN);
    setState(79);
    expr(0);
   
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
//----------------- NegativeOperatorContext ------------------------------------------------------------------

PLDCompParser::ExprContext* PLDCompParser::NegativeOperatorContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

PLDCompParser::NegativeOperatorContext::NegativeOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::NegativeOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitNegativeOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOperatorContext ------------------------------------------------------------------

std::vector<PLDCompParser::ExprContext *> PLDCompParser::BinaryOperatorContext::expr() {
  return getRuleContexts<PLDCompParser::ExprContext>();
}

PLDCompParser::ExprContext* PLDCompParser::BinaryOperatorContext::expr(size_t i) {
  return getRuleContext<PLDCompParser::ExprContext>(i);
}

PLDCompParser::OpContext* PLDCompParser::BinaryOperatorContext::op() {
  return getRuleContext<PLDCompParser::OpContext>(0);
}

PLDCompParser::BinaryOperatorContext::BinaryOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PLDCompParser::BinaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitBinaryOperator(this);
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, PLDCompParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCompParser::INT: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(82);
        match(PLDCompParser::INT);
        break;
      }

      case PLDCompParser::ID: {
        _localctx = _tracker.createInstance<VarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(83);
        match(PLDCompParser::ID);
        break;
      }

      case PLDCompParser::LEFT_PARENTHESE: {
        _localctx = _tracker.createInstance<ParContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(84);
        match(PLDCompParser::LEFT_PARENTHESE);
        setState(85);
        expr(0);
        setState(86);
        match(PLDCompParser::RIGHT_PARENTHESE);
        break;
      }

      case PLDCompParser::T__4: {
        _localctx = _tracker.createInstance<NegativeOperatorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(88);
        match(PLDCompParser::T__4);
        setState(89);
        expr(1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BinaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpr);
        setState(92);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(93);
        op();
        setState(94);
        expr(3); 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
  enterRule(_localctx, 18, PLDCompParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
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
    case 8: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PLDCompParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

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
  "prog", "op", "declaration", "statementseq", "statement", "vardeclaration", 
  "assignmentstat", "returnstatement", "expr", "type"
};

std::vector<std::string> PLDCompParser::_literalNames = {
  "", "'*'", "'/'", "'%'", "'+'", "'-'", "'+='", "'-='", "'*='", "'/='", 
  "'%='", "'return'", "'int'", "", "", "'='", "';'", "'}'", "'{'", "'('", 
  "')'"
};

std::vector<std::string> PLDCompParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "RETURN", "INT_TYPE", "ID", 
  "INT", "ASSIGNMENT", "SEMICOLON", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", 
  "RIGHT_PARENTHESE", "WHITESPACE", "NEWLINE"
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
    0x3, 0x18, 0x6a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x24, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 
    0x31, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x32, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x38, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x47, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x4f, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5d, 0xa, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x63, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x66, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x2, 0x3, 0x12, 0xc, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x2, 0x2, 0x2, 
    0x72, 0x2, 0x16, 0x3, 0x2, 0x2, 0x2, 0x4, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x25, 0x3, 0x2, 0x2, 0x2, 0x8, 0x30, 0x3, 0x2, 0x2, 0x2, 0xa, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x46, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x50, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x67, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x5, 0x6, 0x4, 0x2, 
    0x17, 0x18, 0x7, 0x2, 0x2, 0x3, 0x18, 0x3, 0x3, 0x2, 0x2, 0x2, 0x19, 
    0x24, 0x7, 0x3, 0x2, 0x2, 0x1a, 0x24, 0x7, 0x4, 0x2, 0x2, 0x1b, 0x24, 
    0x7, 0x5, 0x2, 0x2, 0x1c, 0x24, 0x7, 0x6, 0x2, 0x2, 0x1d, 0x24, 0x7, 
    0x7, 0x2, 0x2, 0x1e, 0x24, 0x7, 0x8, 0x2, 0x2, 0x1f, 0x24, 0x7, 0x9, 
    0x2, 0x2, 0x20, 0x24, 0x7, 0xa, 0x2, 0x2, 0x21, 0x24, 0x7, 0xb, 0x2, 
    0x2, 0x22, 0x24, 0x7, 0xc, 0x2, 0x2, 0x23, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x23, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x23, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x23, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x23, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x23, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x5, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x5, 0x14, 0xb, 
    0x2, 0x26, 0x27, 0x7, 0xf, 0x2, 0x2, 0x27, 0x28, 0x7, 0x15, 0x2, 0x2, 
    0x28, 0x29, 0x7, 0x16, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x14, 0x2, 0x2, 0x2a, 
    0x2b, 0x5, 0x8, 0x5, 0x2, 0x2b, 0x2c, 0x7, 0x13, 0x2, 0x2, 0x2c, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x2e, 0x2f, 0x7, 
    0x12, 0x2, 0x2, 0x2f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x38, 0x5, 0xc, 0x7, 0x2, 0x35, 0x38, 0x5, 0x10, 0x9, 0x2, 0x36, 
    0x38, 0x5, 0xe, 0x8, 0x2, 0x37, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x14, 0xb, 0x2, 0x3a, 0x3b, 0x7, 0xf, 
    0x2, 0x2, 0x3b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x14, 0xb, 
    0x2, 0x3d, 0x3e, 0x7, 0xf, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x11, 0x2, 0x2, 
    0x3f, 0x40, 0x5, 0x12, 0xa, 0x2, 0x40, 0x47, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x42, 0x5, 0x14, 0xb, 0x2, 0x42, 0x43, 0x7, 0xf, 0x2, 0x2, 0x43, 0x44, 
    0x7, 0x11, 0x2, 0x2, 0x44, 0x45, 0x7, 0xf, 0x2, 0x2, 0x45, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x39, 0x3, 0x2, 0x2, 0x2, 0x46, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x41, 0x3, 0x2, 0x2, 0x2, 0x47, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x49, 0x7, 0xf, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x11, 0x2, 0x2, 
    0x4a, 0x4f, 0x7, 0x10, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0xf, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0x11, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0xf, 0x2, 0x2, 0x4e, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0xd, 0x2, 0x2, 0x51, 0x52, 0x5, 0x12, 
    0xa, 0x2, 0x52, 0x11, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x8, 0xa, 0x1, 
    0x2, 0x54, 0x5d, 0x7, 0x10, 0x2, 0x2, 0x55, 0x5d, 0x7, 0xf, 0x2, 0x2, 
    0x56, 0x57, 0x7, 0x15, 0x2, 0x2, 0x57, 0x58, 0x5, 0x12, 0xa, 0x2, 0x58, 
    0x59, 0x7, 0x16, 0x2, 0x2, 0x59, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 
    0x7, 0x7, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x12, 0xa, 0x3, 0x5c, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x5f, 0xc, 0x4, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x4, 0x3, 0x2, 
    0x60, 0x61, 0x5, 0x12, 0xa, 0x5, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0xe, 
    0x2, 0x2, 0x68, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9, 0x23, 0x32, 0x37, 0x46, 
    0x4e, 0x5c, 0x64, 
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
