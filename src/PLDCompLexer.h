
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, RETURN = 5, INT_TYPE = 6, INT32_TYPE = 7, 
    CHAR_TYPE = 8, VOID_TYPE = 9, IF = 10, ELSE = 11, WHILE = 12, CHAR = 13, 
    ID = 14, INT = 15, LESS = 16, LESSEQUAL = 17, GREATER = 18, GREATEREQUAL = 19, 
    EQUAL = 20, NOTEQUAL = 21, PLUSPLUS = 22, MINUSMINUS = 23, SHIFTL = 24, 
    SHIFTR = 25, ADDE = 26, SUBE = 27, MULE = 28, DIVE = 29, MODE = 30, 
    ORE = 31, XORE = 32, ANDE = 33, AND = 34, OR = 35, ANDAND = 36, OROR = 37, 
    CARET = 38, TILDE = 39, PRIME = 40, BACKSLASH = 41, ASSIGN = 42, SEMICOLON = 43, 
    COMMA = 44, RIGHT_BRACE = 45, LEFT_BRACE = 46, LEFT_PARENTHESE = 47, 
    RIGHT_PARENTHESE = 48, PLUS = 49, MINUS = 50, STAR = 51, DIV = 52, MOD = 53, 
    WHITESPACE = 54, NEWLINE = 55, BLOCKCOMMENT = 56, LINECOMMENT = 57, 
    DIRECTIVE = 58, ERROR = 59
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

