#pragma once

#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include <fstream>
#include <string>

using namespace std;

class Generator : public PLDCompBaseVisitor {
public:
    Generator(string filename): os(filename,ofstream::out) {}

    antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx) override {
        os << ".text" << endl;
        os << ".global main" << endl;
        visit(ctx->declaration());
        return NULL;
    }

    antlrcpp::Any visitDeclaration(PLDCompParser::DeclarationContext *ctx) override {
        string funcname = ctx->ID()->getText();
        os << funcname << ":" << endl;
        os << "    pushq "<<"%"<<"rbp" << endl;
        os << "    movq "<<"%"<<"rsp, "<<"%"<<"rbp" << endl;
        visitChildren(ctx);
        os << "    popq "<<"%"<<"rbp" << endl;
        os << "    ret " << endl;
        return NULL;
    }

    antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx) override {
        return visitChildren(ctx);
    }

    antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override {
        os << "    movl $";
        visit(ctx->expr());
        os << ", "<<"%"<<"eax" << endl;
        return NULL;
    }

    

private: 
    ofstream os;
};