#include <iostream>

#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
#include "Generator.h"
#include "Test.h"

using namespace antlr4;
using namespace std;


int main(int argc, char* argv[]) {
    
    // Test::lexErrorTests();
    // Test::semanticErrorTests();
    // Test::syntaxErrorTests();
    // Test::validProgramsTests();
    // Test::backendTests();
    Test::customTests2();

    return 0;
}