
// Generated from gram1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "gram1Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by gram1Parser.
 */
class  gram1Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by gram1Parser.
   */
    virtual antlrcpp::Any visitProg(gram1Parser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitReturn_instruction(gram1Parser::Return_instructionContext *context) = 0;


};

