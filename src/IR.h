#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
using namespace std;
using namespace antlr4;

class BasicBlock;
class CFG;

typedef enum {
    Int,
} Type;

const string reg_name[] = {"%edi", "%esi", "%edx", "%ecx", "%r8d", "%r9d"};

//! The class for one 3-address instruction
class IRInstr {
public:
	/** The instructions themselves -- feel free to subclass instead */
	typedef enum {
		ldconst,
		cpy,
		add,
		sub,
		mul,
		andb,
		orb,
		xorb,
		rmem,
		wmem,
		call, 
		cmp, //compare with $1
		cmp_eq,
		cmp_ne,
		cmp_lt,
		cmp_le,
		ret
	} Operation;


	/**  constructor */
	IRInstr(BasicBlock* bb_, Operation op, Type t, vector<string> params);
	
	/** Actual code generation */
	void gen_asm(ostream &o); /**< x86 assembly code generation for this IR instruction */
	Operation getOp();
private:
	BasicBlock* bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
	Operation op;
	Type t;
	vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
	// if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design. 
};


/**  The class for a basic block */

/* A few important comments.
	 IRInstr has no jump instructions:
	 assembly jumps are generated as follows in BasicBlock::gen_asm():
     1/ a cmp_* comparison instructions, if it is the last instruction of its block, 
       generates an actual assembly comparison followed by a conditional jump to the exit_false branch
			 If it is not the last instruction of its block, it behaves as an arithmetic two-operand instruction (add or mult)
		 2/ BasicBlock::gen_asm() first calls IRInstr::gen_asm() on all its instructions, and then 
		    if  exit_true  is a  nullptr, it generates the epilogue
				if  exit_false is not a nullptr, and the last instruction is not a cmp, it generates two conditional branches based on the value of the last variable assigned 
        otherwise it generates an unconditional jmp to the exit_true branch 
*/

class BasicBlock {
 public:
	BasicBlock(CFG* cfg, string entry_label); //set value for next basic block
	void gen_asm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */

	void add_IRInstr(IRInstr::Operation op, Type t, vector<string> params);

	// No encapsulation whatsoever here. Feel free to do better.
	BasicBlock* exit_true;  /**< pointer to the next basic block, true branch. If nullptr, return from procedure */ 
	BasicBlock* exit_false; /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
	string label; /**< label of the BB, also will be the label in the generated code */
	CFG* cfg; /** < the CFG where this block belongs */
	vector<IRInstr*> instrs; /** < the instructions themselves. */
	int ret_token=1;
	bool isGenerated = false;
	bool isLastBlock = false;
	
 protected:

 
};




/** The class for the control flow graph, also includes the symbol table */

/* A few important comments:
	 The entry block is the one with the same label as the AST function name.
	   (it could be the first of bbs, or it could be defined by an attribute value)
	 The exit block is the one with both exit pointers equal to nullptr.
     (again it could be identified in a more explicit way)

 */
class CFG {
 public:
  CFG() {}
	CFG(tree::ParseTree* ast);

	tree::ParseTree* ast; /**< The AST this CFG comes from */
	
	void add_bb(BasicBlock* bb); 
	string label;

	// x86 code generation: could be encapsulated in a processor class in a retargetable compiler
	void gen_asm(ostream& o);
	string IR_reg_to_asm(string reg); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
	void gen_asm_prologue(ostream& o);
	void gen_asm_epilogue(ostream& o);

	// symbol table methods
	bool add_to_symbol_table(string name, Type t);
	bool find_symbol(string name);
	string create_new_tempvar(Type t);
	int get_var_index(string name);
	Type get_var_type(string name);
	void reset_next_temp();
	void move_next_temp(int offset);
	int get_current_address();
	int set_n_params(int n);

	void add_param(string name, Type t);
	
	// basic block management
	string new_BB_name();
	BasicBlock* current_bb;
	BasicBlock* lastBlock;
 protected:
	map <string, Type> SymbolType; /**< part of the symbol table  */
	map <string, int> SymbolIndex; /**< part of the symbol table  */
	int nextFreeSymbolIndex=0; /**< to allocate new symbols (of real variable) in the symbol table */
	int nextBBnumber=0; /**< just for naming */
	int nextTempAddress=0; /**< to allocate new temporary variable */
	vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/
	int n_params;
	vector<string> params_name;
	vector<Type> params_type;

	
};
