
// using standard exceptions
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class VariableNameException: public exception {
    public:
        virtual const char* what() const throw();
        virtual void setVarName(string varName);
    private:
        string varName;
};

class DeclarationException: public exception {
    public:
        virtual const char* what() const throw();
        virtual void setVarName(string varName);
    private:
        string varName;
};

class InvalidDeclarationException: public exception {
    public:
        virtual const char* what() const throw();
};

class ValueNotFoundException: public exception {
    public:
        virtual const char* what() const throw();
        virtual void setValue(string value);
    private:
        string value;
};

class ArrayException: public exception {
    public:
        virtual const char* what() const throw();
        virtual void setArrayName(string arrayName);
    private:
        string arrayName;
};
