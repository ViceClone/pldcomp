
#include "IR.h"
#include <string>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void IRInstr::gen_asm(ostream& o){
    switch (op){
        case ldconst: 
            //on suppose que la direction de memoire est stockee en forme de int
            o<< "movl $"<< bb->cfg->getSymbol(params[1])<<", -"<< params[0]<<"("<<"%"<<"rbp)" << endl;
        break;
        case add:{
            o<< "movl "<< bb->cfg->getSymbol(params[1])<<"("<<"%"<<"rbp)," << "%"<<"eax"<< endl;
            o<< "addl"<< bb->cfg->getSymbol(params[2])<<"("<<"%"<<"rbp), " <<"%"<<"eax"<< endl;
            o<< "movl" << "%" <<"eax, " << bb->cfg->getSymbol(params[0])<<"("<<"%"<<"rbp) " <<endl;
        }
        break;
        case sub: {
            o<< "movl "<< bb->cfg->getSymbol(params[1])<<"("<<"%"<<"rbp)," << "%"<<"eax"<< endl;
            o<< "subl"<< "%"<<"eax"<< bb->cfg->getSymbol(params[2])<<"("<<"%"<<"rbp)" <<endl;
            o<< "movl" << "%" <<"eax, " << bb->cfg->getSymbol(params[0])<<"("<<"%"<<"rbp) " <<endl;
        } 
        break;
        case mul:{
            o<< "movl "<< bb->cfg->getSymbol(params[1])<<"("<<"%"<<"rbp)," << "%"<<"eax"<< endl;
            o<< "imull"<< bb->cfg->getSymbol(params[2])<<"("<<"%"<<"rbp), "<< "%"<<"eax" <<endl;
            o<< "movl" << "%" <<"eax, " << bb->cfg->getSymbol(params[0])<<"("<<"%"<<"rbp) " <<endl;
        }
        break;
        default: 
        break;
    }
}

int CFG::getSymbol(string index){
    return SymbolIndex[index];
}