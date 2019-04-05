#include "antlr4-runtime.h"
#include "IRGenerator.h"

#include <iostream>
#include <vector>

using namespace antlr4;
using namespace std;

int main(int argc, char** argv) {
    ifstream file(argv[1]);
    string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
    cout << "------LEXER-----" << endl;
    ANTLRInputStream input (content);
    PLDCompLexer lexer (&input);
    CommonTokenStream token (&lexer);
    vector<unique_ptr<Token>> list_token = lexer.getAllTokens();
    lexer.reset();
    cout << list_token.size() << endl;
    int n_lex_errors = 0;
    for (auto it=list_token.begin(); it!=list_token.end();++it) {
        if ((*it)->getType()==21) {
            cout << "line " << (*it)->getLine() << ":" << (*it)->getCharPositionInLine() 
                << " unrecognized token \'" << (*it)->getText() << "\'" <<endl;
            n_lex_errors++;
        }
    }

    if (n_lex_errors>0) {
        cout << n_lex_errors << " lex errors" << endl;
    }
    
    
    token.reset();
    cout << "------PARSER-----" << endl;
    PLDCompParser parser (&token);
    tree::ParseTree * tree = parser.prog();
    int n_syntax_errors = parser.getNumberOfSyntaxErrors();
    if (n_syntax_errors>0) {
        cout << n_syntax_errors << " syntax errors" << endl;
    }
    cout << "------CODE GENERATOR-----" << endl;
    
    IRGenerator visitor;
    visitor.visit(tree);
    ofstream o("out.asm",ofstream::out);
    visitor.output_asm(o);
}
