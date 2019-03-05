
// Generated from gram1.g4 by ANTLR 4.7.2


#include "gram1Listener.h"
#include "gram1Visitor.h"

#include "gram1Parser.h"


using namespace antlrcpp;
using namespace antlr4;

gram1Parser::gram1Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

gram1Parser::~gram1Parser() {
  delete _interpreter;
}

std::string gram1Parser::getGrammarFileName() const {
  return "gram1.g4";
}

const std::vector<std::string>& gram1Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& gram1Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

gram1Parser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gram1Parser::Return_instructionContext* gram1Parser::ProgContext::return_instruction() {
  return getRuleContext<gram1Parser::Return_instructionContext>(0);
}


size_t gram1Parser::ProgContext::getRuleIndex() const {
  return gram1Parser::RuleProg;
}

void gram1Parser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gram1Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void gram1Parser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gram1Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any gram1Parser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gram1Visitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

gram1Parser::ProgContext* gram1Parser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, gram1Parser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    match(gram1Parser::T__0);
    setState(5);
    return_instruction();
    setState(6);
    match(gram1Parser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_instructionContext ------------------------------------------------------------------

gram1Parser::Return_instructionContext::Return_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gram1Parser::Return_instructionContext::NOMBRE() {
  return getToken(gram1Parser::NOMBRE, 0);
}


size_t gram1Parser::Return_instructionContext::getRuleIndex() const {
  return gram1Parser::RuleReturn_instruction;
}

void gram1Parser::Return_instructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gram1Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_instruction(this);
}

void gram1Parser::Return_instructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gram1Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_instruction(this);
}


antlrcpp::Any gram1Parser::Return_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gram1Visitor*>(visitor))
    return parserVisitor->visitReturn_instruction(this);
  else
    return visitor->visitChildren(this);
}

gram1Parser::Return_instructionContext* gram1Parser::return_instruction() {
  Return_instructionContext *_localctx = _tracker.createInstance<Return_instructionContext>(_ctx, getState());
  enterRule(_localctx, 2, gram1Parser::RuleReturn_instruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    match(gram1Parser::T__2);
    setState(9);
    match(gram1Parser::NOMBRE);
    setState(10);
    match(gram1Parser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> gram1Parser::_decisionToDFA;
atn::PredictionContextCache gram1Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN gram1Parser::_atn;
std::vector<uint16_t> gram1Parser::_serializedATN;

std::vector<std::string> gram1Parser::_ruleNames = {
  "prog", "return_instruction"
};

std::vector<std::string> gram1Parser::_literalNames = {
  "", "'int main() {'", "'}'", "'return'", "';'"
};

std::vector<std::string> gram1Parser::_symbolicNames = {
  "", "", "", "", "", "NOMBRE"
};

dfa::Vocabulary gram1Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> gram1Parser::_tokenNames;

gram1Parser::Initializer::Initializer() {
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
    0x3, 0x7, 0xf, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0xc, 0x2, 0x6, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0xa, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x7, 0x3, 0x2, 0x2, 
    0x7, 0x8, 0x5, 0x4, 0x3, 0x2, 0x8, 0x9, 0x7, 0x4, 0x2, 0x2, 0x9, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x7, 0x5, 0x2, 0x2, 0xb, 0xc, 0x7, 0x7, 
    0x2, 0x2, 0xc, 0xd, 0x7, 0x6, 0x2, 0x2, 0xd, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

gram1Parser::Initializer gram1Parser::_init;
