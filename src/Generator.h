#pragma once

#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include <fstream>

using namespace std;

class Generator : public PLDCompBaseVisitor {
public:
    Generator(string filename): os(filename,ofstream::out) {}
    antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx) override {
        os << ".text" << endl;
        os << ".global main" << endl;
        os << "main:" << endl;
        os << "    pushq "<<"%"<<"rbp" << endl;
        os << "    movq "<<"%"<<"rsp, "<<"%"<<"rbp" << endl;
        visit(ctx->return_instruction());
        os << "    popq "<<"%"<<"rbp" << endl;
        os << "    ret " << endl;
        return NULL;
    }

    antlrcpp::Any visitReturn_instruction(PLDCompParser::Return_instructionContext *ctx) override {
        os << "    movl $";
        os << ctx->INT()->getText();
        os << ", "<<"%"<<"eax" << endl;
        return NULL;
    }
private: 
    ofstream os;
};