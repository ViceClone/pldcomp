
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, RETURN = 2, INT_TYPE = 3, IF = 4, ELSE = 5, WHILE = 6, CHAR = 7, 
    ID = 8, INT = 9, LESS = 10, LESSEQUAL = 11, GREATER = 12, GREATEREQUAL = 13, 
    EQUAL = 14, NOTEQUAL = 15, AND = 16, OR = 17, ANDAND = 18, OROR = 19, 
    CARET = 20, TILDE = 21, PRIME = 22, BACKSLASH = 23, ASSIGN = 24, SEMICOLON = 25, 
    COMMA = 26, RIGHT_BRACE = 27, LEFT_BRACE = 28, LEFT_PARENTHESE = 29, 
    RIGHT_PARENTHESE = 30, PLUS = 31, MINUS = 32, STAR = 33, DIV = 34, MOD = 35, 
    WHITESPACE = 36, NEWLINE = 37, BLOCKCOMMENT = 38, LINECOMMENT = 39, 
    ERROR = 40
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

