
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

    virtual antlrcpp::Any visitReturn_instruction(PLDCompParser::Return_instructionContext *context) = 0;


};

