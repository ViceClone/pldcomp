
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, RETURN = 11, INT_TYPE = 12, ID = 13, 
    INT = 14, ASSIGNMENT = 15, SEMICOLON = 16, RIGHT_BRACE = 17, LEFT_BRACE = 18, 
    LEFT_PARENTHESE = 19, RIGHT_PARENTHESE = 20, WHITESPACE = 21, NEWLINE = 22
  };

  enum {
    RuleProg = 0, RuleOp = 1, RuleDeclaration = 2, RuleStatementseq = 3, 
    RuleStatement = 4, RuleVardeclaration = 5, RuleAssignmentstat = 6, RuleReturnstatement = 7, 
    RuleExpr = 8, RuleType = 9
  };

  PLDCompParser(antlr4::TokenStream *input);
  ~PLDCompParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class OpContext;
  class DeclarationContext;
  class StatementseqContext;
  class StatementContext;
  class VardeclarationContext;
  class AssignmentstatContext;
  class ReturnstatementContext;
  class ExprContext;
  class TypeContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OpContext() = default;
    void copyFrom(OpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivContext : public OpContext {
  public:
    DivContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddContext : public OpContext {
  public:
    AddContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultContext : public OpContext {
  public:
    MultContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModContext : public OpContext {
  public:
    ModContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddeqContext : public OpContext {
  public:
    AddeqContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubstracteqContext : public OpContext {
  public:
    SubstracteqContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModeqContext : public OpContext {
  public:
    ModeqContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubstractContext : public OpContext {
  public:
    SubstractContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulteqContext : public OpContext {
  public:
    MulteqContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DiveqContext : public OpContext {
  public:
    DiveqContext(OpContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OpContext* op();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    StatementseqContext *statementseq();
    antlr4::tree::TerminalNode *RIGHT_BRACE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  StatementseqContext : public antlr4::ParserRuleContext {
  public:
    StatementseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementseqContext* statementseq();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VardeclarationContext *vardeclaration();
    ReturnstatementContext *returnstatement();
    AssignmentstatContext *assignmentstat();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  VardeclarationContext : public antlr4::ParserRuleContext {
  public:
    VardeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VardeclarationContext() = default;
    void copyFrom(VardeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclWithoutAssignmentContext : public VardeclarationContext {
  public:
    DeclWithoutAssignmentContext(VardeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclWithAssignmentContext : public VardeclarationContext {
  public:
    DeclWithAssignmentContext(VardeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VardeclarationContext* vardeclaration();

  class  AssignmentstatContext : public antlr4::ParserRuleContext {
  public:
    AssignmentstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentstatContext() = default;
    void copyFrom(AssignmentstatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignmentIDContext : public AssignmentstatContext {
  public:
    AssignmentIDContext(AssignmentstatContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignmentINTContext : public AssignmentstatContext {
  public:
    AssignmentINTContext(AssignmentstatContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentstatContext* assignmentstat();

  class  ReturnstatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnstatementContext* returnstatement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParContext : public ExprContext {
  public:
    ParContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstContext : public ExprContext {
  public:
    ConstContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarContext : public ExprContext {
  public:
    VarContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegativeOperatorContext : public ExprContext {
  public:
    NegativeOperatorContext(ExprContext *ctx);

    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryOperatorContext : public ExprContext {
  public:
    BinaryOperatorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpContext *op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_TYPE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

