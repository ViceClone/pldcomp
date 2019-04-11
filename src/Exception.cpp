// using standard exceptions
#include <iostream>
#include <exception>

#include "Exception.h"

using namespace std;

/* Lexer Exception */

void LexerException::setLexerErrors(string lexerErrors) {
    this->lexerErrors = lexerErrors;
}

const char* LexerException::what() const throw() {
    cerr << "ERROR: " << lexerErrors << endl;
    return "LexerException";
}

/* Syntax Exception */

void SyntaxException::setNumberSyntaxErrors(int numberSyntaxErrors) {
    this->numberSyntaxErrors = numberSyntaxErrors;
}

const char* SyntaxException::what() const throw() {
    cerr << "ERROR: " << numberSyntaxErrors << " syntax errors found" << endl;
    return "SyntaxException";
}

/* Variable Name Exception */

void VariableNameException::setVarName(string varName) {
    this->varName = varName;
}

const char* VariableNameException::what() const throw() {
    cerr << "ERROR: Variable name \'" << varName <<  "\' is redundant";
    return "VariableNameException";
}

/* Declaration Exception */

void DeclarationException::setVarName(string varName) {
    this->varName = varName;
}

const char* DeclarationException::what() const throw() {
    cerr << "ERROR: \'" << varName << "\' has not been declared yet " << endl;
    return "DeclarationException";
}

/* Invalid Declaration Exception */

const char* InvalidDeclarationException::what() const throw() {
    cerr << "ERROR: invalid declaration " << endl;
    return "InvalidDeclarationException";
}

/* Value Not Found Exception Exception */

void ValueNotFoundException::setValue(string value) {
    this->value = value;
}

const char* ValueNotFoundException::what() const throw() {
    cerr << "ERROR: cannot find \'" << value << "\'" << endl;
    return "ValueNotFoundException";
}

/* Array Exception */

void ArrayException::setArrayName(string arrayName) {
    this->arrayName = arrayName;
}

const char* ArrayException::what() const throw() {
    cerr << "ERROR: \'" << arrayName << "\' is not an array" << endl;
    return "ArrayException";
}