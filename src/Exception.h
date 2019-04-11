
// using standard exceptions
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class VariableNameException: public exception {
    public:
        virtual const char* what() const throw();
        void setVarName(string varName);
    private:
        string varName;
};

class DeclarationException: public exception {
    virtual const char* what() const throw();
};

class InvalidDeclarationException: public exception {
    virtual const char* what() const throw();
};

class ValueNotFoundException: public exception {
    virtual const char* what() const throw();
};

class ArrayException: public exception {
    virtual const char* what() const throw();
};
