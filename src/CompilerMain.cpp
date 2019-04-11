#include "antlr4-runtime.h"
#include "IRGenerator.h"
#include "PLDCompParser.h"

#include <iostream>
#include <vector>

using namespace antlr4;
using namespace std;

int main(int argc, char** argv) {
    LexerException lexerException;
    SyntaxException syntaxException;

    string filename = argv[1];
    ifstream file(argv[1]);
    string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
    try {
        //cout << "------LEXER-----" << endl;
        ANTLRInputStream input (content);
        PLDCompLexer lexer (&input);
        CommonTokenStream token (&lexer);
        vector<unique_ptr<Token>> list_token = lexer.getAllTokens();
        lexer.reset();
        int n_lex_errors = 0;
        string lex_errors = "";
        for (auto it=list_token.begin(); it!=list_token.end();++it) {
            if ((*it)->getType()==21) {
                lex_errors = lex_errors + "line " + (char*) (*it)->getLine() +  ":" + (char*) (*it)->getCharPositionInLine() 
                    +  " unrecognized token \'" +  (*it)->getText() +  "\'";
                n_lex_errors++;
            }
        }

        if (n_lex_errors>0) {
            lexerException.setLexerErrors(lex_errors + ", number of lexer errors : " + (char*) n_lex_errors);
            throw lexerException;
        }
        
        token.reset();
        //cout << "------PARSER-----" << endl;
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();
        int n_syntax_errors = parser.getNumberOfSyntaxErrors();
        if (n_syntax_errors>0) {
            syntaxException.setNumberSyntaxErrors(n_syntax_errors);
            throw syntaxException;
        }
        
        cout << "------CODE GENERATOR-----" << endl;
        IRGenerator visitor;
        visitor.visit(tree);
        string outfile = filename.substr(0,filename.length()-2)+".asm";
        ofstream o(outfile,ofstream::out);
        visitor.output_asm(o);
    } catch (exception& e) {
        //remove("out.asm");
        cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl;
    } 
}
