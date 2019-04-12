
// using standard exceptions
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException: public exception {
    public:
        virtual void setFileName(string filename);
        virtual void setLine(int line);
        virtual void setPositionInLine(int pos);
    protected: 
        string filename;
        int line;
        int pos;
};

class LexerException: public CustomException {
    public:
        virtual const char* what() const throw();
        virtual void setLexerErrors(string lexerErrors);
    private:
        string lexerErrors;
};

class SyntaxException: public CustomException {
    public:
        virtual const char* what() const throw();
        virtual void setNumberSyntaxErrors(int numberSyntaxErrors);
    private:
        int numberSyntaxErrors;
};


class InvalidDeclarationException: public CustomException {
    public:
        virtual const char* what() const throw();
        virtual void setVarName(string name);
    private:
        string varName;

};

class VarNotFoundException: public CustomException {
    public:
        virtual const char* what() const throw();
        virtual void setVar(string varname);
    private:
        string var;
};

class ArrayException: public CustomException {
    public:
        virtual const char* what() const throw();
        virtual void setArrayName(string arrayName);
    private:
        string arrayName;
};

