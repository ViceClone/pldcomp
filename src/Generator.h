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

    virtual antlrcpp::Any visitStatement(PLDCompParser::StatementContext *ctx) override {
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
        string id = ctx->ID()->getText();
        map<string,int>::iterator it = memTable.find(id);
        if (it == memTable.end()) {
            string type = ctx->type()->getText();
            if (!type.compare("int")) {
                currentAddress -= 4;
                memTable[id] = currentAddress;
                init[id] = true;
                os << "    movl $" << ctx->INT()->getText();
                os << ", " << currentAddress << "(" << "%" << "rbp)" << endl;
            }
        } else {
            cout << "Compilation failed ! " << endl;
            // TODO : delete out.asm
        }
        
        return NULL;
    }
    
    virtual antlrcpp::Any visitDeclWithAssignmentID(PLDCompParser::DeclWithAssignmentIDContext *ctx) override {
        string id = ctx->ID(0)->getText();
        map<string,int>::iterator it = memTable.find(id);
        if (it == memTable.end()) {
            string type = ctx->type()->getText();
            if (!type.compare("int")) {
                currentAddress -= 4;
                memTable[id] = currentAddress;
                string id2 = ctx->ID(1)->getText();
                cout << id2 << endl;
                map<string,int>::iterator it2 = memTable.find(id2);
                if (it2 != memTable.end()) {
                    os << "    movl " << memTable[id2] << "(" << "%" << "rbp), " << "%" << "eax" << endl ;
                    os << "    movl " << "%" << "eax, " << memTable[id] << "(" << "%" << "rbp)" << endl ;
                }
                
            }
        } else {
            cout << "Compilation failed ! " << endl;
            // TODO : delete out.asm
        }
        return NULL;
    }

    virtual antlrcpp::Any visitDeclWithoutAssignment(PLDCompParser::DeclWithoutAssignmentContext *ctx) override {
        string type = ctx->type()->getText();
        string id = ctx->ID()->getText();
        if (!type.compare("int")) {
            currentAddress -= 4;
            memTable[id] = currentAddress;
            init[id] = false;
        }
        return visitChildren(ctx);
    }
private: 
    ofstream os;
    map<string,int> memTable;
    map<string,bool> init;
    int currentAddress = 0;
};