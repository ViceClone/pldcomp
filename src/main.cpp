#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
#include "Generator.h"
#include <iostream>

using namespace antlr4;
using namespace std;

int main(int argc, char* argv[]) {
    ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    PLDCompLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    PLDCompParser parser(&tokens);
    tree::ParseTree* tree = parser.prog();

    Generator visitor("out.asm");

    visitor.visit(tree);

    
    return 0;
}