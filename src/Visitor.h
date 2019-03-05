#pragma once

#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include "ReturnInstruction.h"

using namespace std;

class Visitor : public PLDCompBaseVisitor {
    antlrcpp::Any visitReturn_instruction(PLDCompParser::Return_instructionContext *ctx) override {
        return (int) visit(ctx->NOMBRE());
    }

    antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx) override {
        return (int) visit(ctx->return_instruction());
    }
};