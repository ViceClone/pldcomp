#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
// #include "Generator.h"

using namespace antlr4;
using namespace std;

class Test {
    public:
        static void lexErrorTests();
        static void semanticErrorTests();
        static void syntaxErrorTests();
        static void validProgramsTests();
        static void backendTests();
        static void customTests();
        static void customTests2();
};