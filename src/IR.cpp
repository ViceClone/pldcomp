
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

string IRInstr::get_reg_name(string name) {
    if (name.compare("!bp")==0) {
        return "%rbp";
    }
    string reg = "-" + to_string(bb->cfg->get_var_index(name)) + "(%rbp)";
    return reg;
}

void IRInstr::gen_asm(ostream& o){
    int n_params = params.size();
    switch (op){
        case ldconst:
            #ifdef DEBUG
            cout << "ldconst " << params[0] << " " << params[1] << endl;
            o<< " # " << "ldconst " << params[0] << " " << params[1] << endl;
            #endif
            o<< "    movl $"<< params[1]<<", "<< get_reg_name(params[0]) << endl;
        break;
        case add:{
            #ifdef DEBUG
            cout << "add " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "add " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl " << get_reg_name(params[1]) <<", " << "%"<<"eax" << endl;
            o<< "    addl "<< get_reg_name(params[2])<<", " <<"%"<<"eax"<< endl;
            o<< "    movl " << "%" <<"eax, " << get_reg_name(params[0]) <<endl;
        }
        break;
        case sub: {
            #ifdef DEBUG
            cout << "sub " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "sub " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl "<< get_reg_name(params[1])<<", " << "%"<<"eax" << endl;
            o<< "    subl "<< get_reg_name(params[2]) << " ," << "%" << "eax" << endl;
            o<< "    movl " << "%" <<"eax, " << get_reg_name(params[0]) <<endl;
        } 
        break;
        case mul:{
            #ifdef DEBUG
            cout << "mul " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "mul " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl "<< get_reg_name(params[1])<<", " << "%"<<"eax" << endl;
            o<< "    imull "<< get_reg_name(params[2])<<", "<< "%"<<"eax" <<endl;
            o<< "    movl " << "%" <<"eax, " << get_reg_name(params[0]) <<endl;
        }
        break;
        case div: {
            #ifdef DEBUG
            cout << "div " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "div " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl "<< get_reg_name(params[1])<<", " << "%"<<"eax" << endl;
            o<< "    cltd" << endl;
            o<< "    movl "<< get_reg_name(params[2])<<", " << "%"<<"ecx" << endl;
            o<< "    idivl " << "%" << "ecx" << endl;
            o<< "    movl " << "%" << "eax, " << get_reg_name(params[0]) << endl;
        }
        break;
        case mod: {
            #ifdef DEBUG
            cout << "mod " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "mod " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl "<< get_reg_name(params[1])<<", " << "%"<<"eax" << endl;
            o<< "    cltd" << endl;
            o<< "    movl "<< get_reg_name(params[2])<<", " << "%"<<"ecx" << endl;
            o<< "    idivl " << "%" << "ecx" << endl;
            o<< "    movl " << "%" << "edx, " << get_reg_name(params[0]) << endl;
        }
        break;
        case lshift:{
            #ifdef DEBUG
            cout << "lshift " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "lshift " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl "<< get_reg_name(params[2])<<", " << "%"<<"ecx" << endl;
            o<< "    movl "<< get_reg_name(params[1])<<", " << "%"<<"edx" << endl;
            o<< "    shll "<<"%"<<"cl, "<<"%"<<"edx" << endl;
            o<< "    movl "<<"%"<<"edx, "<<get_reg_name(params[0])<<endl;
        }
        break;
        case rshift:{
            #ifdef DEBUG
            cout << "rshift " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "rshift " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl "<< get_reg_name(params[2])<<", " << "%"<<"ecx" << endl;
            o<< "    movl "<< get_reg_name(params[1])<<", " << "%"<<"edx" << endl;
            o<< "    sarl "<<"%"<<"cl, "<<"%"<<"edx" << endl;
            o<< "    movl "<<"%"<<"edx, "<<get_reg_name(params[0])<<endl;
        }
        break;
        case andb: {
            #ifdef DEBUG
            cout << "and " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "and " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl " << get_reg_name(params[2]) <<", " << "%"<<"eax" << endl;
            o<< "    andl "<< get_reg_name(params[1])<<", " <<"%"<<"eax"<< endl;
            o<< "    movl " << "%" <<"eax, " << get_reg_name(params[0]) <<endl;
        }
        break;
        case orb: {
            #ifdef DEBUG
            cout << "or " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "or " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl " << get_reg_name(params[1]) <<", " << "%"<<"eax" << endl;
            o<< "    orl "<< get_reg_name(params[2])<<", " <<"%"<<"eax"<< endl;
            o<< "    movl " << "%" <<"eax, " << get_reg_name(params[0]) <<endl;
        }
        break;
        case xorb: {
            #ifdef DEBUG
            cout << "xor " << params[0] << " " << params[1] << " " << params[2] << endl;
            o<< " # " << "xor " << params[0] << " " << params[1] << " " << params[2] << endl;
            #endif
            o<< "    movl " << get_reg_name(params[1]) <<", " << "%"<<"eax" << endl;
            o<< "    xorl "<< get_reg_name(params[2])<<", " <<"%"<<"eax"<< endl;
            o<< "    movl " << "%" <<"eax, " << get_reg_name(params[0]) <<endl;
        }
        break;
        case getflag: {
            #ifdef DEBUG
            cout << "getflag" << params[0] << " " << params[1] << " " << params[2] << params[3] <<endl;
            o<< " # " << "getflag" << params[0] << " " << params[1] << " " << params[2] << params[3] << endl;
            #endif
            o<< "    movl " << get_reg_name(params[2]) <<", " << "%"<<"eax" << endl;
            o<< "    cmpl " << get_reg_name(params[3]) <<", " << "%"<<"eax" << endl;
            o<< "    set"<<params[0]<<" %"<<"al"<<endl;
            o<< "    movzbl %"<<"al, "<<"%"<<"eax"<<endl;
            o<< "    movl " << "%" <<"eax, " << get_reg_name(params[1]) <<endl;
        }
        break;
        case cpy: {
            #ifdef DEBUG
            cout << "cpy " << params[0] << " " << params[1] << endl;
            o << " # " << "cpy " << params[0] << " " << params[1] << endl;
            #endif
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl " << get_reg_name(params[1]) << ", " << "%" << "eax" << endl;
            }
            if (params[0].compare("!return_reg") != 0) {
                o << "    movl " << "%" << "eax, " <<  get_reg_name(params[0]) << endl;
            }
        }
        break;
        case call: {
            #ifdef DEBUG
            cout << "call " << params[0] << " ";
            o << "# function call" << params[0] << endl;
            #endif
            int n_params = params.size();
            for (int i=1; i<n_params; i++) {
                #ifdef DEBUG
                cout << (params[i]) << " ";
                #endif
                o << "    movl " << get_reg_name(params[i]) << ", " << reg_name[i-1] << endl;
            }
            #ifdef DEBUG
            cout << endl;
            #endif
            o << "    call " << params[0] << endl;
        }
        break;
        case ret: {
            #ifdef DEBUG
            o<< " # " << "ret " << endl;
            cout << "ret" << endl;
            #endif
        }
        break;
        case cmp_eq: {
            #ifdef DEBUG
            cout << "cmp_eq " << params[0] << " " << params[1] << endl;
            #endif
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl " << get_reg_name(params[1]) << ", " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, "
                << get_reg_name(params[0]) << endl;
            o << "    jne " << bb->exit_false->label << endl;
        }
        break;
        case cmp_ne: {
            #ifdef DEBUG
            cout << "cmp_ne " << params[0] << " " << params[1] << endl;
            #endif
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl " << get_reg_name(params[1]) << ", " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, "
                << get_reg_name(params[0]) << endl;
            o << "    je " << bb->exit_false->label << endl;
        }
        break;
        case cmp_lt: {
            #ifdef DEBUG
            cout << "cmp_lt " << params[0] << " " << params[1] << endl;
            #endif
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl " << get_reg_name(params[1]) << ", " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, "
                << get_reg_name(params[0]) << endl;
            o << "    jge " << bb->exit_false->label << endl;
        }
        break;
        case cmp_le: {
            #ifdef DEBUG
            cout << "cmp_le " << params[0] << " " << params[1] << endl;
            #endif
            if (params[1].compare("!return_reg") != 0) {
                o << "    movl " << get_reg_name(params[1]) << ", " << "%" << "eax" << endl;
            }
            o << "    cmpl " << "%" << "eax, "
                << get_reg_name(params[0]) << endl;
            o << "    jg " << bb->exit_false->label << endl;
        }
        break;
        case cmp: {
            #ifdef DEBUG
            cout << "cmp " << params[0] << endl;
            o << "    # cmp " << params[0] << endl;
            #endif
            o << "    cmpl $0, ";
            if (params[0].compare("!return_reg") == 0) {
                o << "%" << "eax" << endl;
            } else {
                o << get_reg_name(params[0]) << endl;
            }
            o << "    je " << bb->exit_false->label << endl;
        }
        break;
        case wmem: {
            #ifdef DEBUG
            cout << "wmem " << params[0] << " " << params[1] << endl;
            o << "# wmem " << params[0] << " " << params[1] << endl;
            #endif
            o << "    movl " << get_reg_name(params[1]) << ", " << "%" << "edx" << endl;
            o << "    movl " << get_reg_name(params[0]) << ", " << "%" << "eax" << endl;
            o << "    cltq" << endl;
            o << "    movl " << "%" << "edx, (" << "%" << "rbp,"<< "%" << "rax,1)" << endl; 
        }
        break;
        case rmem: {
            #ifdef DEBUG
            cout << "rmem " << params[0] << " " << params[1] << endl;
            o << "# rmem " << params[0] << " " << params[1] << endl;
            #endif
            o << "    movl " << get_reg_name(params[1]) << ", " << "%" << "eax" << endl;
            o << "    cltq" << endl;
            o << "    movl (" << "%" << "rbp,"<< "%" << "rax,1), " << "%" << "eax" << endl;
            o << "    movl " << "%" << "eax, " << get_reg_name(params[0]) << endl;
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
    cfg->add_bb(this);
}

void BasicBlock::gen_asm(ostream& o){
    if (isGenerated) return;
    isGenerated = true;
    if (instrs.size()==0) {
        o << "    jmp " << exit_true->label << endl;
        o << endl;
        return;
    }
    auto it = instrs.begin();
    bool stop = false;
    while (!stop && it!=instrs.end()) {
        (*it)->gen_asm(o);
        if ((*it)->getOp()==IRInstr::ret) {
            stop = true;
            //cfg->lastBlock->gen_asm(o);
        }
        ++it;
    }
    

    if (exit_true==nullptr) {
        //cfg->gen_asm_epilogue(o);
    } else {
        IRInstr * lastInstr = *(instrs.end()-1);
        if (lastInstr->getOp() != IRInstr::cmp_eq || lastInstr->getOp() != IRInstr::cmp_ne
            || lastInstr->getOp() != IRInstr::cmp_lt || lastInstr->getOp() != IRInstr::cmp_le) {
            o << "    jmp " << exit_true->label << endl;
            o << endl;
        }
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
    #ifdef DEBUG
    cout << "nb blocks: " << bbs.size() << endl;
    cout << "-------------gen_asm for " << bbs[0]->label << "-------------" << endl;
    #endif
    gen_asm_prologue(o);
    bbs[0]->gen_asm(o);
    for (auto it=bbs.begin()+1; it!=bbs.end(); ++it) {
        if (!(*it)->isGenerated && !(*it)->isLastBlock) {
            o << (*it)->label << ":" << endl;
            (*it)->gen_asm(o);
        }
        
    }
    o << ".LLast" << label << ":" << endl;
    gen_asm_epilogue(o);
    
}

void CFG::gen_asm_prologue(ostream& o) {
    o << "# prologue" << endl;
    o << ".global " << label << endl;
    o << ".type " << label << ", @function" << endl;
    o << label << ":" << endl;
    o << "    pushq "<<"%"<<"rbp" << endl;
    o << "    movq "<<"%"<<"rsp, "<<"%"<<"rbp" << endl;
    #ifdef DEBUG
    cout << "----------LOCAL MEM: " << nextFreeSymbolIndex << endl;
    #endif
    int local_mem = 16*((nextFreeSymbolIndex/16)+((nextFreeSymbolIndex%16)!=0));
    o << "    subq $" << local_mem << ", " << "%" << "rsp" << endl; 
    for (int i=0; i<n_params; i++) {
        o << "    movl " << reg_name[i] << ", -" 
            << SymbolIndex[params_name[i]] << "("<<"%"<<"rbp)" << endl; 
    }
    o << "    movl $0, -" << to_string(get_var_index("!returnval")) << "("<<"%"<<"rbp)" << endl;
    o << "# end of prologue" << endl;
}

void CFG::gen_asm_epilogue(ostream& o) {
    o << "# epilogue" << endl;
    o << "    movl -" << this->get_var_index("!returnval") <<"("<<"%"<<"rbp)," << "%"<<"eax"<<endl;
    int local_mem = 16*((nextFreeSymbolIndex/16)+((nextFreeSymbolIndex%16)!=0));
    o << "    addq $" << local_mem << ", " << "%" << "rsp" << endl; 
    o << "    popq "<<"%"<<"rbp" << endl;
    o << "    retq " << endl;
    o << endl;
}

int CFG::set_n_params(int n) {
    n_params = n;
}

bool CFG::add_to_symbol_table(string name, Type t, int size) {
    map<string,int>::iterator it = SymbolIndex.find(name);
    if (!(it==SymbolIndex.end())) {
        return false;
    }
    nextFreeSymbolIndex += size;
    nextTempAddress = nextFreeSymbolIndex;
    SymbolIndex[name] = nextFreeSymbolIndex;
    SymbolType[name] = t;
    #ifdef DEBUG
    // cout << "---------VAR DECLARATION: \"" << name << "\"  at address @" << nextFreeSymbolIndex << endl;
    #endif
    return true;
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
    SymbolType[var_name] = t;
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
