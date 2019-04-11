#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
#include "IRGenerator.h"
#include "Util.h"
// #include "Generator.h"

using namespace antlr4;
using namespace std;

class Test {
    public:
        static void runTests();
        static void lexErrorTests(std::ofstream& testLogStream);
        static void semanticErrorTests(std::ofstream& testLogStream);
        static void syntaxErrorTests(std::ofstream& testLogStream);
        static void validProgramsTests(std::ofstream& testLogStream);
        static void backendTests(std::ofstream& testLogStream);
        static void customTests(std::ofstream& testLogStream);
        static void runTest(std::ofstream& testLogStream, string testName, vector<string> testsFiles);
};