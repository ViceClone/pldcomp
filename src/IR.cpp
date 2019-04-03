
#include "IR.h"
#include <string>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using namespace antlr4;

IRInstr::IRInstr(BasicBlock* bb_, Operation op, Type t, vector<string> params) {
    this->op = op;
    this->t = t;
    copy(params.begin(), params.end(), back_inserter(this->params));
    this->bb = bb_;
}

void IRInstr::gen_asm(ostream& o){
    switch (op){
        case ldconst:
            cout << "ldconst " << params[0] << " " << params[1] << endl;
            o<< "    movl $"<< params[1]<<", -"<< bb->cfg->get_var_index(params[0])<<"("<<"%"<<"rbp)";
            o<< " # " << "ldconst " << params[0] << " " << params[1] << endl;
        break;
        case add:{
            cout << "add " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< "    movl -"<< bb->cfg->get_var_index(params[1])<<"("<<"%"<<"rbp)," << "%"<<"eax";
            o<< " # " << "add " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< "    addl -"<< bb->cfg->get_var_index(params[2])<<"("<<"%"<<"rbp), " <<"%"<<"eax"<< endl;
            o<< "    movl " << "%" <<"eax, -" << bb->cfg->get_var_index(params[0])<<"("<<"%"<<"rbp) " <<endl;
        }
        break;
        case sub: {
            cout << "sub " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< "    movl -"<< bb->cfg->get_var_index(params[1])<<"("<<"%"<<"rbp)," << "%"<<"eax";
            o<< " # " << "sub " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< "    subl -"<< bb->cfg->get_var_index(params[2]) << "("<<"%"<<"rbp) ," << "%" << "eax" << endl;
            o<< "    movl " << "%" <<"eax, -" << bb->cfg->get_var_index(params[0])<<"("<<"%"<<"rbp) " <<endl;
        } 
        break;
        case mul:{
            cout << "mul " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< "    movl -"<< bb->cfg->get_var_index(params[1])<<"("<<"%"<<"rbp), " << "%"<<"eax";
            o<< " # " << "mul " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< "    imull -"<< bb->cfg->get_var_index(params[2])<<"("<<"%"<<"rbp), "<< "%"<<"eax" <<endl;
            o<< "    movl " << "%" <<"eax, -" << bb->cfg->get_var_index(params[0])<<"("<<"%"<<"rbp) " <<endl;
        }
        break;
        case cpy: {
            cout << "cpy " << params[0] << " " << params[1] << endl;
            o << "    movl -" << bb->cfg->get_var_index(params[1]) << "(" << "%" << "rbp), " << "%" << "eax";
            o << " # " << "cpy " << params[0] << " " << params[1] << endl;
            o << "    movl " << "%" << "eax, -" <<  bb->cfg->get_var_index(params[0]) << "(" << "%" << "rbp)"  << endl;
        }
        break;
        case ret: {
            cout << "ret " << params[0] << endl;
            o<< "    movl -"<< bb->cfg->get_var_index(params[0])<<"("<<"%"<<"rbp), " << "%"<<"eax";
            o<< " # " << "ret " << params[0] << endl;
        }
        default: 
        break;
    }
}

// Definitions of basicblock functions.

BasicBlock::BasicBlock(CFG* cfg, string entry_label) {
    this->cfg = cfg;
    this->label = entry_label;
}

void BasicBlock::gen_asm(ostream& o){
    for (auto it=instrs.begin();it!=instrs.end();++it){
        (*it)->gen_asm(o);
    }
    if (exit_true==nullptr) {
        cfg->gen_asm_epilogue(o);
    }
    o << endl;
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params){
    instrs.push_back(new IRInstr(this,op,t,params));
}

// Definitions of CFG functions.

CFG::CFG(tree::ParseTree* ast) {
    this->ast = ast;
}

void CFG::add_bb(BasicBlock* bb){
    bb->cfg = this;
    bbs.push_back(bb);
}

void CFG::gen_asm(ostream& o) {
    gen_asm_prologue(o);
    bbs[0]->gen_asm(o);
    for (auto it=bbs.begin()+1; it!=bbs.end(); ++it) {
        o << (*it)->label << ":" << endl;
        (*it)->gen_asm(o);
    }
}

void CFG::gen_asm_prologue(ostream& o) {
    o << ".global " << label << endl;
    o << ".type " << label << ", @function" << endl;
    o << label << ":" << endl;
    o << "    pushq "<<"%"<<"rbp" << endl;
    o << "    movq "<<"%"<<"rsp, "<<"%"<<"rbp" << endl;
    cout << "----------LOCAL MEM: " << nextFreeSymbolIndex << endl;
    int local_mem = 16*((nextFreeSymbolIndex/16)+((nextFreeSymbolIndex%16)!=0));
    o << "    subq $" << local_mem << ", " << "%" << "rsp" << endl; 
}

void CFG::gen_asm_epilogue(ostream& o) {
    int local_mem = 16*((nextFreeSymbolIndex/16)+((nextFreeSymbolIndex%16)!=0));
    o << "    addq $" << local_mem << ", " << "%" << "rsp" << endl; 
    o << "    popq "<<"%"<<"rbp" << endl;
    o << "    retq " << endl;
}

bool CFG::add_to_symbol_table(string name, Type t) {
    map<string,int>::iterator it = SymbolIndex.find(name);
    if (!(it==SymbolIndex.end())) {
        return false;
    }
    if (t==Int) {
        nextFreeSymbolIndex += 4;
        SymbolIndex[name] = nextFreeSymbolIndex;
        SymbolType[name] = t;
        cout << "---------VAR DECLARATION: \"" << name << "\"  at address @" << nextFreeSymbolIndex << endl;
        return true;
    }
    return false;
}

bool CFG::find_symbol(string name) {
    map<string,int>::iterator it = SymbolIndex.find(name);
    if (it==SymbolIndex.end()) {
        return false;
    }
    return true;
}

string CFG::create_new_tempvar(Type t) {
    nextTempAddress+=4;
    string var_name = "!tmp" + to_string(nextTempAddress);
    cout << "TEMP: " << var_name << "  " << nextTempAddress << endl;
    SymbolIndex[var_name] = nextTempAddress;
    SymbolType[var_name] = Int;
    return var_name;
}

void CFG::reset_next_temp(int offset) {
    nextTempAddress = nextFreeSymbolIndex+offset;
}

int CFG::get_current_address() {
    return nextFreeSymbolIndex;
}

string CFG::new_BB_name() {
    string new_name = ".L" + to_string(nextBBnumber);
    nextBBnumber++;
    return new_name;
}

int CFG::get_var_index(string index){
    return SymbolIndex[index];
}

Type CFG::get_var_type(string name) {
    return SymbolType[name];
}
