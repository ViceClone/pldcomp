
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

    virtual antlrcpp::Any visitDeclaration(PLDCompParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatementseq(PLDCompParser::StatementseqContext *context) = 0;

    virtual antlrcpp::Any visitStatement(PLDCompParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentstat(PLDCompParser::AssignmentstatContext *context) = 0;

    virtual antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *context) = 0;

    virtual antlrcpp::Any visitConst(PLDCompParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitPar(PLDCompParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitType(PLDCompParser::TypeContext *context) = 0;


};

