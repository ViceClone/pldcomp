
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, RETURN = 6, INT_TYPE = 7, 
    IF = 8, ELSE = 9, WHILE = 10, CHAR = 11, ID = 12, INT = 13, LESS = 14, 
    LESSEQUAL = 15, GREATER = 16, GREATEREQUAL = 17, EQUAL = 18, NOTEQUAL = 19, 
    AND = 20, OR = 21, ANDAND = 22, OROR = 23, CARET = 24, TILDE = 25, PRIME = 26, 
    BACKSLASH = 27, ASSIGN = 28, SEMICOLON = 29, COMMA = 30, RIGHT_BRACE = 31, 
    LEFT_BRACE = 32, LEFT_PARENTHESE = 33, RIGHT_PARENTHESE = 34, PLUS = 35, 
    MINUS = 36, STAR = 37, DIV = 38, MOD = 39, WHITESPACE = 40, NEWLINE = 41, 
    BLOCKCOMMENT = 42, LINECOMMENT = 43, ERROR = 44
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

