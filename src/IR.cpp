
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

void BasicBlock::gen_asm(ostream& o){
    for(vector<IRInstr*>::iterator it=instrs.begin();it!=instrs.end();++it){
        it.base.gen_asm(o);
    }
    if (exit_true==nullptr){
        //???
        o<< "retq"<<endl;
    }
    if(exit_false==nullptr){
        //unconditional jump
    }
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params){
    //on insere la nouvelle instr a la fin du vecteur
    //peut etre il faut avancer de 1 le pointeur end?
    instrs.insert(instrs.end(),new IRInstr(this,op,t,params));
}
void CFG::add_bb(BasicBlock* bb){
    //peut etre il faut avancer de 1 le pointeur end?
    bbs.insert(bbs.end(),bb);
}

int CFG::getSymbol(string index){
    return SymbolIndex[index];
}