
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, RETURN = 4, INT_TYPE = 5, IF = 6, ELSE = 7, 
    WHILE = 8, CHAR = 9, ID = 10, INT = 11, LESS = 12, LESSEQUAL = 13, GREATER = 14, 
    GREATEREQUAL = 15, EQUAL = 16, NOTEQUAL = 17, AND = 18, OR = 19, ANDAND = 20, 
    OROR = 21, CARET = 22, TILDE = 23, PRIME = 24, BACKSLASH = 25, ASSIGN = 26, 
    SEMICOLON = 27, COMMA = 28, RIGHT_BRACE = 29, LEFT_BRACE = 30, LEFT_PARENTHESE = 31, 
    RIGHT_PARENTHESE = 32, PLUS = 33, MINUS = 34, STAR = 35, DIV = 36, MOD = 37, 
    WHITESPACE = 38, NEWLINE = 39, BLOCKCOMMENT = 40, LINECOMMENT = 41, 
    ERROR = 42
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

