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

    /*
        Test Moodle à faire passer pour la version finale de notre compilateur.

        Test::lexErrorTests();
        Test::semanticErrorTests();
        Test::syntaxErrorTests();
        Test::validProgramsTests();
        Test::backendTests();
    */

    /* 
        Vous pouvez tester notre compilateur en changeant le test.c se trouvant dans ../test/custom/ comme mentionné 
        dans notre rapport de conception section 3.3.2 sur les tests personnalisés, page 12.
    */

    Test::customTests();

    return 0;
}