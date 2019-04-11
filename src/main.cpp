#include <iostream>

#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
#include "IRGenerator.h"
#include "Test.h"

using namespace antlr4;
using namespace std;


int main(int argc, char* argv[]) {

    cout << "---------------EXECUTING TEST---------------" << endl;
    
    // Test::lexErrorTests();
    // Test::semanticErrorTests();
    // Test::syntaxErrorTests();
    // Test::validProgramsTests();
    // Test::backendTests();
    Test::customTests();

    return 0;
}