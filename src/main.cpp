#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
#include "Generator.h"

using namespace antlr4;
using namespace std;

int main() {
    ANTLRInputStream input("int main() {return 40;}");
    PLDCompLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    PLDCompParser parser(&tokens);
    tree::ParseTree* tree = parser.prog();

    Generator visitor("out.asm");

    visitor.visit(tree);

    
    return 0;
}