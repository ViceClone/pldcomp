
// Generated from PLDComp.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PLDCompParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PLDCompParser.
 */
class  PLDCompVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PLDCompParser.
   */
    virtual antlrcpp::Any visitProg(PLDCompParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitMult(PLDCompParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitDiv(PLDCompParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitMod(PLDCompParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitAdd(PLDCompParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitSubstract(PLDCompParser::SubstractContext *context) = 0;

    virtual antlrcpp::Any visitAddeq(PLDCompParser::AddeqContext *context) = 0;

    virtual antlrcpp::Any visitSubstracteq(PLDCompParser::SubstracteqContext *context) = 0;

    virtual antlrcpp::Any visitMulteq(PLDCompParser::MulteqContext *context) = 0;

    virtual antlrcpp::Any visitDiveq(PLDCompParser::DiveqContext *context) = 0;

    virtual antlrcpp::Any visitModeq(PLDCompParser::ModeqContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(PLDCompParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *context) = 0;

    virtual antlrcpp::Any visitStatement(PLDCompParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentINT(PLDCompParser::AssignmentINTContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentID(PLDCompParser::AssignmentIDContext *context) = 0;

    virtual antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *context) = 0;

    virtual antlrcpp::Any visitPar(PLDCompParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitConst(PLDCompParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitVar(PLDCompParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitNegativeOperator(PLDCompParser::NegativeOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBinaryOperator(PLDCompParser::BinaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitType(PLDCompParser::TypeContext *context) = 0;


};

