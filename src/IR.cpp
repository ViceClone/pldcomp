
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

IRInstr::Operation IRInstr::getOp() {
    return op;
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
            o << " # " << "cpy " << params[0] << " " << params[1] << endl;
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl -" << bb->cfg->get_var_index(params[1]) << "(" << "%" << "rbp), " << "%" << "eax" << endl;
            }
            if (params[0].compare("!return_reg") != 0) {
                o << "    movl " << "%" << "eax, -" <<  bb->cfg->get_var_index(params[0]) << "(" << "%" << "rbp)"  << endl;
            }
        }
        break;
        case call: {
            cout << "call " << params[0] << " ";
            o << "# function call" << params[0] << endl;
            int n_params = params.size();
            for (int i=1; i<n_params; i++) {
                cout << (params[i]) << " ";
                o << "    movl -" << bb->cfg->get_var_index(params[i]) << "(" << "%"
                    << "rbp), " << reg_name[i-1] << endl;
            }
            cout << endl;
            o << "    call " << params[0] << endl;
        }
        break;
        case ret: {
            o<< " # " << "ret " << endl;
            o<< "    jmp .LLast" << bb->cfg->label << endl;
            o<< endl;
            cout << "ret" << endl;
        }
        break;
        case cmp_eq: {
            cout << "cmp_eq " << params[0] << " " << params[1] << endl;
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl -" << bb->cfg->get_var_index(params[1]) << "(" << "%" << "rbp), " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, -"
                << bb->cfg->get_var_index(params[0]) << "(" << "%" << "rbp)" << endl;
            o << "    jne " << bb->exit_false->label << endl;
        }
        break;
        case cmp_ne: {
            cout << "cmp_ne " << params[0] << " " << params[1] << endl;
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl -" << bb->cfg->get_var_index(params[1]) << "(" << "%" << "rbp), " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, -"
                << bb->cfg->get_var_index(params[0]) << "(" << "%" << "rbp)" << endl;
            o << "    je " << bb->exit_false->label << endl;
        }
        break;
        case cmp_lt: {
            cout << "cmp_lt " << params[0] << " " << params[1] << endl;
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl -" << bb->cfg->get_var_index(params[1]) << "(" << "%" << "rbp), " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, -"
                << bb->cfg->get_var_index(params[0]) << "(" << "%" << "rbp)" << endl;
            o << "    jge " << bb->exit_false->label << endl;
        }
        break;
        case cmp_le: {
            cout << "cmp_le " << params[0] << " " << params[1] << endl;
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl -" << bb->cfg->get_var_index(params[1]) << "(" << "%" << "rbp), " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, -"
                << bb->cfg->get_var_index(params[0]) << "(" << "%" << "rbp)" << endl;
            o << "    jg " << bb->exit_false->label << endl;
        }
        break;
        case cmp: {
            cout << "cmp " << params[0] << endl;
            o << "    # cmp " << params[0] << endl;
            o << "    cmpl $0, ";
            if (params[0].compare("!return_reg") == 0) {
                o << "%" << "eax" << endl;
            } else {
                o << "-" << bb->cfg->get_var_index(params[0]) << "(" << "%" << "rbp)" << endl;
            }
            o << "    je " << bb->exit_false->label << endl;
        }
        break;
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
    if (isGenerated) return;
    isGenerated = true;
    if (isLastBlock) {
        o << label << ":" << endl;
    }
    auto it = instrs.begin();
    bool stop = false;
    while (!stop && it!=instrs.end()) {
        (*it)->gen_asm(o);
        if ((*it)->getOp()==IRInstr::ret) {
            stop = true;
            cfg->lastBlock->gen_asm(o);
        }
        ++it;
    }
    
    // for (auto it=instrs.begin();it!=instrs.end();++it){
    //     (*it)->gen_asm(o);
    // }
    
    if (stop) return;
    if (exit_true==nullptr) {
        cfg->gen_asm_epilogue(o);
    } else {
        IRInstr * lastInstr = *(instrs.end()-1);
        if (lastInstr->getOp() != IRInstr::cmp_eq || lastInstr->getOp() != IRInstr::cmp_ne
            || lastInstr->getOp() != IRInstr::cmp_lt || lastInstr->getOp() != IRInstr::cmp_le) {
            o << "    jmp " << exit_true->label << endl;
            o << endl;
            if (!exit_true->isGenerated) {
                o << exit_true->label << ":" << endl;
            }
        }
        exit_true->gen_asm(o);
    }

    if (exit_false) {
        cout << "-------------gen_asm for " << exit_false->label << "-------------" << endl;
        if (!exit_false->isGenerated) {
            o << exit_false->label << ": " << endl;
        }
        exit_false->gen_asm(o);
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
    cout << "-------------gen_asm for " << bbs[0]->label << "-------------" << endl;
    gen_asm_prologue(o);
    bbs[0]->gen_asm(o);
    /*
    for (auto it=bbs.begin()+1; it!=bbs.end(); ++it) {
        o << (*it)->label << ":" << endl;
        (*it)->gen_asm(o);
    }
    */
}

void CFG::gen_asm_prologue(ostream& o) {
    o << "# prologue" << endl;
    o << ".global " << label << endl;
    o << ".type " << label << ", @function" << endl;
    o << label << ":" << endl;
    o << "    pushq "<<"%"<<"rbp" << endl;
    o << "    movq "<<"%"<<"rsp, "<<"%"<<"rbp" << endl;
    cout << "----------LOCAL MEM: " << nextFreeSymbolIndex << endl;
    int local_mem = 16*((nextFreeSymbolIndex/16)+((nextFreeSymbolIndex%16)!=0));
    o << "    subq $" << local_mem << ", " << "%" << "rsp" << endl; 
    for (int i=0; i<n_params; i++) {
        o << "    movl " << reg_name[i] << ", -" 
            << SymbolIndex[params_name[i]] << "("<<"%"<<"rbp)" << endl; 
    }
    o << "# end of prologue" << endl;
}

void CFG::gen_asm_epilogue(ostream& o) {
    o << "# epilogue" << endl;
    o << "    movl -" << this->get_var_index("!returnval") <<"("<<"%"<<"rbp)," << "%"<<"eax"<<endl;
    int local_mem = 16*((nextFreeSymbolIndex/16)+((nextFreeSymbolIndex%16)!=0));
    o << "    addq $" << local_mem << ", " << "%" << "rsp" << endl; 
    o << "    popq "<<"%"<<"rbp" << endl;
    o << "    retq " << endl;
}

int CFG::set_n_params(int n) {
    n_params = n;
}

bool CFG::add_to_symbol_table(string name, Type t) {
    map<string,int>::iterator it = SymbolIndex.find(name);
    if (!(it==SymbolIndex.end())) {
        return false;
    }
    if (t==Int) {
        nextFreeSymbolIndex += 4;
        nextTempAddress = nextFreeSymbolIndex;
        SymbolIndex[name] = nextFreeSymbolIndex;
        SymbolType[name] = t;
        cout << "---------VAR DECLARATION: \"" << name << "\"  at address @" << nextFreeSymbolIndex << endl;
        return true;
    }
    return false;
}

bool CFG::find_symbol(string name) {
    if (name.compare("!return_reg") == 0) {
        return true;
    }
    map<string,int>::iterator it = SymbolIndex.find(name);
    if (it==SymbolIndex.end()) {
        return false;
    }
    return true;
}

string CFG::create_new_tempvar(Type t) {
    nextTempAddress+=4;
    string var_name = "!tmp" + to_string(nextTempAddress);
    //cout << "TEMP: " << var_name << "  " << nextTempAddress << endl;
    SymbolIndex[var_name] = nextTempAddress;
    SymbolType[var_name] = Int;
    return var_name;
}

void CFG::add_param(string name, Type t) {
    params_name.push_back(name);
    params_type.push_back(t);
}

void CFG::reset_next_temp() {
    nextTempAddress = nextFreeSymbolIndex;
}

void CFG::move_next_temp(int offset) {
    nextTempAddress+=offset;
    //cout << "MOVE ADDRESS: " <<nextTempAddress << endl;
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
