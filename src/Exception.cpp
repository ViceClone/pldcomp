// using standard exceptions
#include <iostream>
#include <exception>

#include "Exception.h"

using namespace std;

const char* doubleDeclarationException::what() const throw() {
    return "Double Declaration Exception";
}


const char* assignmentWithoutDeclarationException::what() const throw() {
    return "Assignment without Declaration Exception";
}


const char* doubleDeclarationAssignmentException::what() const throw() {
    return "Double Declaration with Assignment Exception";
}

