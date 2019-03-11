
// Generated from PLDComp.g4 by ANTLR 4.7.2


#include "PLDCompListener.h"
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

void PLDCompParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void PLDCompParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
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
    setState(14);
    declaration();
    setState(15);
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

tree::TerminalNode* PLDCompParser::DeclarationContext::LeftParen() {
  return getToken(PLDCompParser::LeftParen, 0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::RightParen() {
  return getToken(PLDCompParser::RightParen, 0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::LeftBrace() {
  return getToken(PLDCompParser::LeftBrace, 0);
}

PLDCompParser::StatementseqContext* PLDCompParser::DeclarationContext::statementseq() {
  return getRuleContext<PLDCompParser::StatementseqContext>(0);
}

tree::TerminalNode* PLDCompParser::DeclarationContext::RightBrace() {
  return getToken(PLDCompParser::RightBrace, 0);
}


size_t PLDCompParser::DeclarationContext::getRuleIndex() const {
  return PLDCompParser::RuleDeclaration;
}

void PLDCompParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void PLDCompParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
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
    setState(17);
    type();
    setState(18);
    match(PLDCompParser::ID);
    setState(19);
    match(PLDCompParser::LeftParen);
    setState(20);
    match(PLDCompParser::RightParen);
    setState(21);
    match(PLDCompParser::LeftBrace);
    setState(22);
    statementseq();
    setState(23);
    match(PLDCompParser::RightBrace);
   
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

void PLDCompParser::StatementseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementseq(this);
}

void PLDCompParser::StatementseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementseq(this);
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
    setState(26); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(25);
      statement();
      setState(28); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PLDCompParser::RETURN);
   
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

PLDCompParser::ReturnstatementContext* PLDCompParser::StatementContext::returnstatement() {
  return getRuleContext<PLDCompParser::ReturnstatementContext>(0);
}


size_t PLDCompParser::StatementContext::getRuleIndex() const {
  return PLDCompParser::RuleStatement;
}

void PLDCompParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void PLDCompParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
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
    enterOuterAlt(_localctx, 1);
    setState(30);
    returnstatement();
   
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

tree::TerminalNode* PLDCompParser::ReturnstatementContext::Semicolon() {
  return getToken(PLDCompParser::Semicolon, 0);
}


size_t PLDCompParser::ReturnstatementContext::getRuleIndex() const {
  return PLDCompParser::RuleReturnstatement;
}

void PLDCompParser::ReturnstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnstatement(this);
}

void PLDCompParser::ReturnstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnstatement(this);
}


antlrcpp::Any PLDCompParser::ReturnstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitReturnstatement(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::ReturnstatementContext* PLDCompParser::returnstatement() {
  ReturnstatementContext *_localctx = _tracker.createInstance<ReturnstatementContext>(_ctx, getState());
  enterRule(_localctx, 8, PLDCompParser::RuleReturnstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(PLDCompParser::RETURN);
    setState(33);
    expr();
    setState(34);
    match(PLDCompParser::Semicolon);
   
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

tree::TerminalNode* PLDCompParser::ParContext::LeftParen() {
  return getToken(PLDCompParser::LeftParen, 0);
}

PLDCompParser::ExprContext* PLDCompParser::ParContext::expr() {
  return getRuleContext<PLDCompParser::ExprContext>(0);
}

tree::TerminalNode* PLDCompParser::ParContext::RightParen() {
  return getToken(PLDCompParser::RightParen, 0);
}

PLDCompParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }

void PLDCompParser::ParContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPar(this);
}
void PLDCompParser::ParContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPar(this);
}

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

void PLDCompParser::ConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConst(this);
}
void PLDCompParser::ConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConst(this);
}

antlrcpp::Any PLDCompParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
PLDCompParser::ExprContext* PLDCompParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 10, PLDCompParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(41);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCompParser::INT: {
        _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<PLDCompParser::ConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(36);
        match(PLDCompParser::INT);
        break;
      }

      case PLDCompParser::LeftParen: {
        _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<PLDCompParser::ParContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(37);
        match(PLDCompParser::LeftParen);
        setState(38);
        expr();
        setState(39);
        match(PLDCompParser::RightParen);
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

//----------------- TypeContext ------------------------------------------------------------------

PLDCompParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCompParser::TypeContext::getRuleIndex() const {
  return PLDCompParser::RuleType;
}

void PLDCompParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void PLDCompParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCompListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any PLDCompParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::TypeContext* PLDCompParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, PLDCompParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(PLDCompParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PLDCompParser::_decisionToDFA;
atn::PredictionContextCache PLDCompParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PLDCompParser::_atn;
std::vector<uint16_t> PLDCompParser::_serializedATN;

std::vector<std::string> PLDCompParser::_ruleNames = {
  "prog", "declaration", "statementseq", "statement", "returnstatement", 
  "expr", "type"
};

std::vector<std::string> PLDCompParser::_literalNames = {
  "", "'int'", "'return'", "", "", "'='", "';'", "'}'", "'{'", "'('", "')'"
};

std::vector<std::string> PLDCompParser::_symbolicNames = {
  "", "", "RETURN", "ID", "INT", "Assignment", "Semicolon", "RightBrace", 
  "LeftBrace", "LeftParen", "RightParen", "Whitespace", "Newline"
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
    0x3, 0xe, 0x30, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x6, 
    0x4, 0x1d, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x1e, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x2c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x2, 0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2, 0x2, 0x2, 0x2a, 
    0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x20, 0x3, 0x2, 0x2, 0x2, 0xa, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 0x7, 0x2, 0x2, 0x3, 0x12, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x5, 0xe, 0x8, 0x2, 0x14, 0x15, 
    0x7, 0x5, 0x2, 0x2, 0x15, 0x16, 0x7, 0xb, 0x2, 0x2, 0x16, 0x17, 0x7, 
    0xc, 0x2, 0x2, 0x17, 0x18, 0x7, 0xa, 0x2, 0x2, 0x18, 0x19, 0x5, 0x6, 
    0x4, 0x2, 0x19, 0x1a, 0x7, 0x9, 0x2, 0x2, 0x1a, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x1d, 0x5, 0x8, 0x5, 0x2, 0x1c, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 
    0x5, 0xa, 0x6, 0x2, 0x21, 0x9, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x7, 
    0x4, 0x2, 0x2, 0x23, 0x24, 0x5, 0xc, 0x7, 0x2, 0x24, 0x25, 0x7, 0x8, 
    0x2, 0x2, 0x25, 0xb, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2c, 0x7, 0x6, 0x2, 
    0x2, 0x27, 0x28, 0x7, 0xb, 0x2, 0x2, 0x28, 0x29, 0x5, 0xc, 0x7, 0x2, 
    0x29, 0x2a, 0x7, 0xc, 0x2, 0x2, 0x2a, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x3, 0x2, 0x2, 0x2e, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x1e, 0x2b, 
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
