// using standard exceptions
#include <iostream>
#include <exception>

#include "Exception.h"

using namespace std;

void VariableNameException::setVarName(string varName) {
    varName = varName;
}

const char* VariableNameException::what() const throw() {
    cerr << "ERROR: Variable name " << varName <<  " is redundant";
    return "Variable Name Exception";
}


const char* DeclarationException::what() const throw() {
    return "Declaration Exception";
}


const char* InvalidDeclarationException::what() const throw() {
    return "Invalid Declaration Exception";
}

const char* ValueNotFoundException::what() const throw() {
    return "Value Not Found Exception";
}

const char* ArrayException::what() const throw() {
    return "Array Exception";
}