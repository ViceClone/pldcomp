// using standard exceptions
#include <iostream>
#include <exception>

#include "Exception.h"

using namespace std;

void CustomException::setFileName(string file) {
    filename = file;
}

void CustomException::setLine(int line) {
    this->line = line;
}

void CustomException::setPositionInLine(int pos) {
    this->pos = pos;
}

/* Lexer Exception */

void LexerException::setLexerErrors(string lexerErrors) {
    this->lexerErrors = lexerErrors;
}

const char* LexerException::what() const throw() {
    cerr << lexerErrors << endl;
    return "LexerException";
}

/* Syntax Exception */

void SyntaxException::setNumberSyntaxErrors(int numberSyntaxErrors) {
    this->numberSyntaxErrors = numberSyntaxErrors;
}

const char* SyntaxException::what() const throw() {
    //cerr << "ERROR: " << numberSyntaxErrors << " syntax errors found" << endl;
    return "SyntaxException";
}


/* Invalid Declaration Exception */

void InvalidDeclarationException::setVarName(string var){
    this->varName = var;
}

const char* InvalidDeclarationException::what() const throw() {
    cerr << "\033[1;96m" << filename << ":" << line << ":" << pos
        << ": \033[1;31merror:\033[0m ";
    cerr << "identifier \'" << varName << "\' has already been declared " << endl;
    return "InvalidDeclarationException";
}

/* Value Not Found Exception Exception */

void VarNotFoundException::setVar(string var) {
    this->var = var;
}

const char* VarNotFoundException::what() const throw() {
    cerr << "\033[1;96m" << filename << ":" << line << ":" << pos
        << ": \033[1;31merror:\033[0m ";
    cerr << "\'" << var << "\' has not been declared yet " << endl;
    return "VarNotFoundException";
}

/* Array Exception */

void ArrayException::setArrayName(string arrayName) {
    this->arrayName = arrayName;
}

const char* ArrayException::what() const throw() {
    cerr << "\033[1;96m" << filename << ":" << line << ":" << pos
        << ": \033[1;31merror:\033[0m ";
    cerr << "ERROR: \'" << arrayName << "\' is not an array" << endl;
    return "ArrayException";
}