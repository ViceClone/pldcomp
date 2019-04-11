#pragma once

#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <stdio.h>

#include "PLDCompBaseVisitor.h"
#include "antlr4-runtime.h"
#include "Exception.h"

using namespace std;

class Generator : public PLDCompBaseVisitor {
public:
    Generator(string filename): os(filename,ofstream::out) {}

    antlrcpp::Any visitProg(PLDCompParser::ProgContext *ctx) override {
        os << ".text" << endl;
        os << ".global main" << endl;
        return visitChildren(ctx);
    }

    antlrcpp::Any visitFunctiondefinition(PLDCompParser::FunctiondefinitionContext *ctx) override {
        return visitChildren(ctx);
    }

    antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx) override {
        return visitChildren(ctx);
    }

    antlrcpp::Any visitReturnstatement(PLDCompParser::ReturnstatementContext *ctx) override {
        string expr = visit(ctx->expr());
        os << "    movl ";
        os << expr;
        os << ", "<<"%"<<"eax" << endl;
        return NULL;
    }

    /*
    Visitors for expression
    */
    antlrcpp::Any visitConst(PLDCompParser::ConstContext *ctx) override {
        return (string)("$" + ctx->INT()->getText());
    }

    antlrcpp::Any visitNegConst(PLDCompParser::NegConstContext *ctx) override {
        return (string)("$-" + ctx->INT()->getText());
    }

    antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx) override {
        return (string)(to_string(memTable[ctx->ID()->getText()]) + "(" + "%" + "rbp)" );
    }

    antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx) override {
        string expr = visit(ctx->expr());
        return expr;
    }

    antlrcpp::Any visitNegExpr(PLDCompParser::NegExprContext *ctx) override {
        int address = currentAddress;
        string expr = visit(ctx->expr());
        currentAddress = address - 4;
        os << "    movl " << expr << ", " << "%" << "eax" << endl;
        os << "    negl " << endl;
        os << "    movl " << "%" << "eax, " << currentAddress << "(" << "%" << "rbp)" << endl;
        return (string) (to_string(currentAddress) + "(" + "%" + "rbp)");
    }

    antlrcpp::Any visitMultiplicativeOp(PLDCompParser::MultiplicativeOpContext *ctx) override {
        int address = currentAddress;
        string left = visit(ctx->expr(0));
        string right = visit(ctx->expr(1));
        os << "    movl " << left << ", " << "%" << "eax" << endl;
        if ((ctx->op->getText()).compare("*") == 0) {
            os << "    imull " << right << ", " << "%" << "eax" << endl;
            currentAddress = address - 4;
            os << "    movl " << "%" << "eax, " << currentAddress << "(" << "%" << "rbp)" << endl;
        } else if ((ctx->op->getText()).compare("/") == 0) {
            os << "    cltd" << endl;
            os << "    movl " << right << ", " << "%" << "ecx" << endl;
            os << "    idivl " << "%" << "ecx" << endl;
            currentAddress = address - 4;
            os << "    movl " << "%" << "eax, " << currentAddress << "(" << "%" << "rbp)" << endl;
        } else if ((ctx->op->getText()).compare("%") == 0) {
            os << "    cltd" << endl;
            os << "    movl " << right << ", " << "%" << "ecx" << endl;
            os << "    idivl " << "%" << "ecx" << endl;
            currentAddress = address - 4;
            os << "    movl " << "%" << "edx, " << currentAddress << "(" << "%" << "rbp)" << endl;
        }
        
        return (string) (to_string(currentAddress) + "(" + "%" + "rbp)");
    }

    antlrcpp::Any visitAdditiveOp(PLDCompParser::AdditiveOpContext *ctx) override {
        int address = currentAddress;
        string left = visit(ctx->expr(0));
        string right = visit(ctx->expr(1));
        os << "    movl " << left << ", " << "%" << "eax" << endl;
        os << "    movl " << right << ", " << "%" << "ecx" << endl;
        if ((ctx->op->getText()).compare("+") == 0) {
            os << "    addl " << "%" << "ecx, " << "%" << "eax" << endl;
        } else if ((ctx->op->getText()).compare("-") == 0) {
            os << "    subl " << "%" << "ecx, " << "%" << "eax" << endl;
        }
        currentAddress = address - 4;
        os << "    movl " << "%" << "eax, " << currentAddress << "(" << "%" << "rbp)" << endl;
        return (string) (to_string(currentAddress) + "(" + "%" + "rbp)");
    }

    

    /*
    Visitors for declaration
    */
    antlrcpp::Any visitDeclWithAssignment(PLDCompParser::DeclWithAssignmentContext *ctx) override {
        string id = ctx->ID()->getText();
        map<string,int>::iterator it = memTable.find(id);
        if (it == memTable.end()) {
            string type = ctx->type()->getText();
            if (!type.compare("int")) {
                currentAddress -= 4;
                memTable[id] = currentAddress;
                init[id] = true;
                string expr = visit(ctx->expr());
                os << "    movl " << expr << ", " << "%" << "eax" << endl;
                currentAddress = memTable[id];
                os << "    movl " << "%" << "eax, " << memTable[id] << "(" << "%" << "rbp)" << endl;
            }
        } else {
            // doubleDeclarationAssignmentException ddae;
            // throw ddae;
        }
        return NULL;
    }

    antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx) override {
        string type = ctx->type()->getText();
        string id = ctx->ID()->getText();
        map<string,int>::iterator it = memTable.find(id);
        if (it == memTable.end()) {
            if (!type.compare("int")) {
                currentAddress -= 4;
                memTable[id] = currentAddress;
                init[id] = false;
            }
        } else {
            // doubleDeclarationException dde;
            // throw dde;
        }
        return NULL;
    }

    /*
    Visitors for assignment statement
    */

    antlrcpp::Any visitAssignmentExpr(PLDCompParser::AssignmentExprContext *ctx) override {
        string id = ctx->ID()->getText();
        map<string,int>::iterator it = memTable.find(id);
        if (it != memTable.end()) {
            string expr = visit(ctx->expr());
            os << "    movl " << expr << ", " << "%" << "eax" << endl;
            currentAddress = memTable[id];
            os << "    movl " << "%" << "eax, " << memTable[id] << "(" << "%" << "rbp)" << endl;
        } else {
            // assignmentWithoutDeclarationException awde;
            // throw awde;
        }
        return NULL;
    }

private: 
    ofstream os;
    map<string,int> memTable;
    map<string,bool> init;
    int currentAddress = 0;
};