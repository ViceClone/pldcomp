
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, RETURN = 2, INT_TYPE = 3, ID = 4, INT = 5, ASSIGN = 6, SEMICOLON = 7, 
    RIGHT_BRACE = 8, LEFT_BRACE = 9, LEFT_PARENTHESE = 10, RIGHT_PARENTHESE = 11, 
    PLUS = 12, MINUS = 13, STAR = 14, DIV = 15, MOD = 16, WHITESPACE = 17, 
    NEWLINE = 18, BLOCKCOMMENT = 19, LINECOMMENT = 20, ERROR = 21
  };

  PLDCompLexer(antlr4::CharStream *input);
  ~PLDCompLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

