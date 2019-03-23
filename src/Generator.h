#pragma once

#include "antlr4-runtime.h"
#include "PLDCompBaseVisitor.h"
#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <stdio.h>

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
        os << "    retq " << endl;
        return NULL;
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

    antlrcpp::Any visitVar(PLDCompParser::VarContext *ctx) override {
        return (string)(to_string(memTable[ctx->ID()->getText()]) + "(" + "%" + "rbp)" );
    }

    antlrcpp::Any visitPar(PLDCompParser::ParContext *ctx) override {
        string expr = visit(ctx->expr());
        return expr;
    }

    antlrcpp::Any visitMultOp(PLDCompParser::MultOpContext *ctx) override {
        int address = currentAddress;
        string left = visit(ctx->expr(0));
        string right = visit(ctx->expr(1));
        os << "    movl " << left << ", " << "%" << "eax" << endl;
        os << "    imull " << right << ", " << "%" << "eax" << endl;
        currentAddress = address - 4;
        os << "    movl " << "%" << "eax, " << currentAddress << "(" << "%" << "rbp)" << endl;
        return (string) (to_string(currentAddress) + "(" + "%" + "rbp)");
    }

    antlrcpp::Any visitAddOp(PLDCompParser::AddOpContext *ctx) override {
        int address = currentAddress;
        string left = visit(ctx->expr(0));
        string right = visit(ctx->expr(1));
        os << "    movl " << left << ", " << "%" << "eax" << endl;
        os << "    movl " << right << ", " << "%" << "ecx" << endl;
        os << "    addl " << "%" << "ecx, " << "%" << "eax" << endl;
        currentAddress = address - 4;
        os << "    movl " << "%" << "eax, " << currentAddress << "(" << "%" << "rbp)" << endl;
        return (string) (to_string(currentAddress) + "(" + "%" + "rbp)");
    }

    antlrcpp::Any visitSubOp(PLDCompParser::SubOpContext *ctx) override {
        int address = currentAddress;
        string left = visit(ctx->expr(0));
        string right = visit(ctx->expr(1));
        os << "    movl " << left << ", " << "%" << "eax" << endl;
        os << "    movl " << right << ", " << "%" << "ecx" << endl;
        os << "    addl " << "%" << "ecx, " << "%" << "eax" << endl;
        currentAddress = address - 4;
        os << "    subl " << "%" << "eax, " << currentAddress << "(" << "%" << "rbp)" << endl;
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
            throw -1;
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
            throw -1;
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
            cout << currentAddress << endl;
        } else {
            //TODO: Error: variable has not been declared
            throw -1;
        }
        return NULL;
    }

private: 
    ofstream os;
    map<string,int> memTable;
    map<string,bool> init;
    int currentAddress = 0;
};