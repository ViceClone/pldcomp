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
                lex_errors = lex_errors + "\033[1m" + filename + ":" + to_string((*it)->getLine()) +  ":" + to_string((*it)->getCharPositionInLine())
                    +  ":\033[1;31m error: \033[0munrecognized token \'" +  (*it)->getText() +  "\'\n";
                n_lex_errors++;
            }
        }

        if (n_lex_errors>0) {
            LexerException lexerException;
            lexerException.setLexerErrors(lex_errors + "\033[1m" + filename + ": \033[31m" + to_string(n_lex_errors) + " lexical errors have been found \033[0m" );
            throw lexerException;
        }
        cout << "\033[1;96m" << filename << ":\033[0m no lexical error has been found " << endl;
        token.reset();
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();
        int n_syntax_errors = parser.getNumberOfSyntaxErrors();
        if (n_syntax_errors>0) {
            cerr << "\033[1;31m" << filename << ":\033[0m " << n_syntax_errors << " syntax errors have been found" << endl;
            SyntaxException syntaxException;
            syntaxException.setNumberSyntaxErrors(n_syntax_errors);
            throw syntaxException;
        }
        cout << "\033[1;96m" << filename << ":\033[0m no syntax error has been found " << endl;
        IRGenerator visitor;
        visitor.set_filename(filename);
        visitor.visit(tree);
        string outfile = filename.substr(0,filename.length()-2)+".asm";
        ofstream o(outfile,ofstream::out);
        visitor.output_asm(o);
        return 0;
    } catch (LexerException le) {
        le.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    } catch (SyntaxException se) {
        se.what();
        cerr << "Compilation failed!" << endl;
        exit(1);
    }
}
