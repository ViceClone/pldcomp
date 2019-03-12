#pragma once

#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include <fstream>
#include <string>
#include <map>
#include <iostream>
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

    virtual antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override {
        os << "    movl $" << (int)visit(ctx->expr());
        os << ", "<<"%"<<"eax" << endl;
        return NULL;
    }


    virtual antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override {
        //os << ctx->INT()->getText();
        return (int)stoi(ctx->INT()->getText());
    }

    virtual antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) override {
        string type = ctx->type()->getText();
        string id = ctx->ID()->getText();
        if (!type.compare("int")) {
            currentAddress -= 4;
            memTable[id] = currentAddress;
            os << "    movl $" << (int)visit(ctx->expr());
            os << ", " << currentAddress << "(" << "%" << "rbp)" << endl;
        }
        return visitChildren(ctx);
    }

private: 
    ofstream os;
    map<string,int> memTable;
    int currentAddress = 0;
};