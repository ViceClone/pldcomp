
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

PLDCompParser::Return_instructionContext* PLDCompParser::ProgContext::return_instruction() {
  return getRuleContext<PLDCompParser::Return_instructionContext>(0);
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
    setState(4);
    match(PLDCompParser::T__0);
    setState(5);
    return_instruction();
    setState(6);
    match(PLDCompParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_instructionContext ------------------------------------------------------------------

PLDCompParser::Return_instructionContext::Return_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PLDCompParser::Return_instructionContext::NOMBRE() {
  return getToken(PLDCompParser::NOMBRE, 0);
}


size_t PLDCompParser::Return_instructionContext::getRuleIndex() const {
  return PLDCompParser::RuleReturn_instruction;
}


antlrcpp::Any PLDCompParser::Return_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCompVisitor*>(visitor))
    return parserVisitor->visitReturn_instruction(this);
  else
    return visitor->visitChildren(this);
}

PLDCompParser::Return_instructionContext* PLDCompParser::return_instruction() {
  Return_instructionContext *_localctx = _tracker.createInstance<Return_instructionContext>(_ctx, getState());
  enterRule(_localctx, 2, PLDCompParser::RuleReturn_instruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    match(PLDCompParser::T__2);
    setState(9);
    match(PLDCompParser::NOMBRE);
    setState(10);
    match(PLDCompParser::T__3);
   
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
  "prog", "return_instruction"
};

std::vector<std::string> PLDCompParser::_literalNames = {
  "", "'int main() {'", "'}'", "'return'", "';'"
};

std::vector<std::string> PLDCompParser::_symbolicNames = {
  "", "", "", "", "", "NOMBRE"
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

PLDCompParser::Initializer PLDCompParser::_init;
