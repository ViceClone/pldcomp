
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, RETURN = 5, INT_TYPE = 6, CHAR_TYPE = 7, 
    VOID_TYPE = 8, IF = 9, ELSE = 10, WHILE = 11, CHAR = 12, ID = 13, INT = 14, 
    LESS = 15, LESSEQUAL = 16, GREATER = 17, GREATEREQUAL = 18, EQUAL = 19, 
    NOTEQUAL = 20, AND = 21, OR = 22, ANDAND = 23, OROR = 24, CARET = 25, 
    TILDE = 26, PRIME = 27, BACKSLASH = 28, ASSIGN = 29, SEMICOLON = 30, 
    COMMA = 31, RIGHT_BRACE = 32, LEFT_BRACE = 33, LEFT_PARENTHESE = 34, 
    RIGHT_PARENTHESE = 35, PLUS = 36, MINUS = 37, STAR = 38, DIV = 39, MOD = 40, 
    WHITESPACE = 41, NEWLINE = 42, BLOCKCOMMENT = 43, LINECOMMENT = 44, 
    ERROR = 45
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

