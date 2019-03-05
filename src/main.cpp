#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
#include "Visitor.h"

using namespace antlr4;
using namespace std;

int main() {
    ANTLRInputStream input("1+3*6");
    PLDCompLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    PLDCompParser parser(&tokens);
    tree::ParseTree* tree = parser.prog();

    Visitor visitor;

    int resultat = (int)visitor.visit(tree);

    cout<<"Résultat "<<resultat<<endl;
    
    return 0;
}