
// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class doubleDeclarationException: public exception {
    virtual const char* what() const throw();
};


class assignmentWithoutDeclarationException: public exception {
    virtual const char* what() const throw();
};


class doubleDeclarationAssignmentException: public exception {
    virtual const char* what() const throw();
};
