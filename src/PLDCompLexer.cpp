
// Generated from PLDComp.g4 by ANTLR 4.7.2


#include "PLDCompLexer.h"


using namespace antlr4;


PLDCompLexer::PLDCompLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PLDCompLexer::~PLDCompLexer() {
  delete _interpreter;
}

std::string PLDCompLexer::getGrammarFileName() const {
  return "PLDComp.g4";
}

const std::vector<std::string>& PLDCompLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& PLDCompLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& PLDCompLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& PLDCompLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& PLDCompLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> PLDCompLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& PLDCompLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> PLDCompLexer::_decisionToDFA;
atn::PredictionContextCache PLDCompLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PLDCompLexer::_atn;
std::vector<uint16_t> PLDCompLexer::_serializedATN;

std::vector<std::string> PLDCompLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"NOMBRE"
};

std::vector<std::string> PLDCompLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> PLDCompLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> PLDCompLexer::_literalNames = {
  "", u8"'int main() {'", u8"'}'", u8"'return'", u8"';'"
};

std::vector<std::string> PLDCompLexer::_symbolicNames = {
  "", "", "", "", "", u8"NOMBRE"
};

dfa::Vocabulary PLDCompLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PLDCompLexer::_tokenNames;

PLDCompLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x7, 0x2a, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0x27, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 
    0x28, 0x2, 0x2, 0x7, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 
    0x3, 0x2, 0x3, 0x3, 0x2, 0x32, 0x3b, 0x2, 0x2a, 0x2, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0xe, 0x7, 0x6b, 0x2, 0x2, 0xe, 0xf, 0x7, 0x70, 0x2, 0x2, 0xf, 0x10, 
    0x7, 0x76, 0x2, 0x2, 0x10, 0x11, 0x7, 0x22, 0x2, 0x2, 0x11, 0x12, 0x7, 
    0x6f, 0x2, 0x2, 0x12, 0x13, 0x7, 0x63, 0x2, 0x2, 0x13, 0x14, 0x7, 0x6b, 
    0x2, 0x2, 0x14, 0x15, 0x7, 0x70, 0x2, 0x2, 0x15, 0x16, 0x7, 0x2a, 0x2, 
    0x2, 0x16, 0x17, 0x7, 0x2b, 0x2, 0x2, 0x17, 0x18, 0x7, 0x22, 0x2, 0x2, 
    0x18, 0x19, 0x7, 0x7d, 0x2, 0x2, 0x19, 0x4, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x1b, 0x7, 0x7f, 0x2, 0x2, 0x1b, 0x6, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 
    0x7, 0x74, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x67, 0x2, 0x2, 0x1e, 0x1f, 0x7, 
    0x76, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x77, 0x2, 0x2, 0x20, 0x21, 0x7, 0x74, 
    0x2, 0x2, 0x21, 0x22, 0x7, 0x70, 0x2, 0x2, 0x22, 0x8, 0x3, 0x2, 0x2, 
    0x2, 0x23, 0x24, 0x7, 0x3d, 0x2, 0x2, 0x24, 0xa, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x27, 0x9, 0x2, 0x2, 0x2, 0x26, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0xc, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2, 0x28, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PLDCompLexer::Initializer PLDCompLexer::_init;
