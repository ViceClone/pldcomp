
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompLexer : public antlr4::Lexer {
public:
  enum {
    RETURN = 1, INT_TYPE = 2, IF = 3, ELSE = 4, ID = 5, INT = 6, LESS = 7, 
    LESSEQUAL = 8, GREATER = 9, GREATEREQUAL = 10, EQUAL = 11, NOTEQUAL = 12, 
    AND = 13, OR = 14, ANDAND = 15, OROR = 16, CARET = 17, TILDE = 18, ASSIGN = 19, 
    SEMICOLON = 20, COMMA = 21, RIGHT_BRACE = 22, LEFT_BRACE = 23, LEFT_PARENTHESE = 24, 
    RIGHT_PARENTHESE = 25, PLUS = 26, MINUS = 27, STAR = 28, DIV = 29, MOD = 30, 
    WHITESPACE = 31, NEWLINE = 32, BLOCKCOMMENT = 33, LINECOMMENT = 34, 
    ERROR = 35
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

