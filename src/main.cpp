#include "antlr4-runtime.h"
#include "IRGenerator.h"
#include "PLDCompParser.h"

#include <iostream>
#include <vector>

using namespace antlr4;
using namespace std;

int main(int argc, char** argv) {
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
            if ((*it)->getType()==PLDCompParser::ERROR) {
                lex_errors = lex_errors + "line " + to_string((*it)->getLine()) +  ":" + to_string((*it)->getCharPositionInLine())
                    +  " unrecognized token \'" +  (*it)->getText() +  "\'\n";
                n_lex_errors++;
            }
        }

        if (n_lex_errors>0) {
            LexerException lexerException;
            lexerException.setLexerErrors(lex_errors + ", number of lexer errors : " + to_string(n_lex_errors));
            throw lexerException;
        }
        
        token.reset();
        //cout << "------PARSER-----" << endl;
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();
        int n_syntax_errors = parser.getNumberOfSyntaxErrors();
        if (n_syntax_errors>0) {
            SyntaxException syntaxException;
            syntaxException.setNumberSyntaxErrors(n_syntax_errors);
            throw syntaxException;
        }
        
        cout << "------CODE GENERATOR-----" << endl;
        IRGenerator visitor;
        visitor.visit(tree);
        string outfile = filename.substr(0,filename.length()-2)+".asm";
        ofstream o(outfile,ofstream::out);
        visitor.output_asm(o);
    } catch (LexerException le) {
        cerr << "Exception caught " << le.what() << endl << "Compilation failed!" << endl;
        exit(1);
    } catch (SyntaxException se) {
        cerr << "Exception caught " << se.what() << endl << "Compilation failed!" << endl;
        exit(1);
    }
}
