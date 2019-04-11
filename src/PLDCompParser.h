
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PLDCompParser : public antlr4::Parser {
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

  enum {
    RuleProg = 0, RuleFunctiondefinition = 1, RuleStatementseq = 2, RuleStatement = 3, 
    RuleIfstatement = 4, RuleWhilestatement = 5, RuleForstatement = 6, RuleCallstatement = 7, 
    RuleCall = 8, RuleVardeclaration = 9, RuleAssignmentstat = 10, RuleLvalue = 11, 
    RuleArray = 12, RuleReturnstatement = 13, RuleExpr = 14, RuleType = 15
  };

  PLDCompParser(antlr4::TokenStream *input);
  ~PLDCompParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class FunctiondefinitionContext;
  class StatementseqContext;
  class StatementContext;
  class IfstatementContext;
  class WhilestatementContext;
  class ForstatementContext;
  class CallstatementContext;
  class CallContext;
  class VardeclarationContext;
  class AssignmentstatContext;
  class LvalueContext;
  class ArrayContext;
  class ReturnstatementContext;
  class ExprContext;
  class TypeContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<FunctiondefinitionContext *> functiondefinition();
    FunctiondefinitionContext* functiondefinition(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  FunctiondefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    StatementseqContext *statementseq();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiondefinitionContext* functiondefinition();

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
    IfstatementContext *ifstatement();
    WhilestatementContext *whilestatement();
    ForstatementContext *forstatement();
    CallstatementContext *callstatement();
    ReturnstatementContext *returnstatement();
    AssignmentstatContext *assignmentstat();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  IfstatementContext : public antlr4::ParserRuleContext {
  public:
    IfstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();
    std::vector<antlr4::tree::TerminalNode *> LEFT_BRACE();
    antlr4::tree::TerminalNode* LEFT_BRACE(size_t i);
    std::vector<StatementseqContext *> statementseq();
    StatementseqContext* statementseq(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_BRACE();
    antlr4::tree::TerminalNode* RIGHT_BRACE(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstatementContext* ifstatement();

  class  WhilestatementContext : public antlr4::ParserRuleContext {
  public:
    WhilestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    StatementseqContext *statementseq();
    antlr4::tree::TerminalNode *RIGHT_BRACE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhilestatementContext* whilestatement();

  class  ForstatementContext : public antlr4::ParserRuleContext {
  public:
    ForstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    std::vector<AssignmentstatContext *> assignmentstat();
    AssignmentstatContext* assignmentstat(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();
    StatementseqContext *statementseq();
    antlr4::tree::TerminalNode *RIGHT_BRACE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForstatementContext* forstatement();

  class  CallstatementContext : public antlr4::ParserRuleContext {
  public:
    CallstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallstatementContext* callstatement();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

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
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclArrayContext : public VardeclarationContext {
  public:
    DeclArrayContext(VardeclarationContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

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

  class  AssignmentExprContext : public AssignmentstatContext {
  public:
    AssignmentExprContext(AssignmentstatContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentstatContext* assignmentstat();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LvalueContext() = default;
    void copyFrom(LvalueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdLContext : public LvalueContext {
  public:
    IdLContext(LvalueContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayLContext : public LvalueContext {
  public:
    ArrayLContext(LvalueContext *ctx);

    ArrayContext *array();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LvalueContext* lvalue();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayContext* array();

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

  class  CharConstContext : public ExprContext {
  public:
    CharConstContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarContext : public ExprContext {
  public:
    VarContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplicativeOpContext : public ExprContext {
  public:
    MultiplicativeOpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstContext : public ExprContext {
  public:
    ConstContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegExprContext : public ExprContext {
  public:
    NegExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *LEFT_PARENTHESE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegConstContext : public ExprContext {
  public:
    NegConstContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rel2ExprContext : public ExprContext {
  public:
    Rel2ExprContext(ExprContext *ctx);

    antlr4::Token *relop = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalOrContext : public ExprContext {
  public:
    LogicalOrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OROR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayExprContext : public ExprContext {
  public:
    ArrayExprContext(ExprContext *ctx);

    ArrayContext *array();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitwiseXorContext : public ExprContext {
  public:
    BitwiseXorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CARET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitwiseOrContext : public ExprContext {
  public:
    BitwiseOrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalAndContext : public ExprContext {
  public:
    LogicalAndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ANDAND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AdditiveOpContext : public ExprContext {
  public:
    AdditiveOpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitwiseAndContext : public ExprContext {
  public:
    BitwiseAndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rel1ExprContext : public ExprContext {
  public:
    Rel1ExprContext(ExprContext *ctx);

    antlr4::Token *relop = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATEREQUAL();
    antlr4::tree::TerminalNode *LESSEQUAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallExprContext : public ExprContext {
  public:
    CallExprContext(ExprContext *ctx);

    CallContext *call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_TYPE();
    antlr4::tree::TerminalNode *CHAR_TYPE();
    antlr4::tree::TerminalNode *VOID_TYPE();


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

