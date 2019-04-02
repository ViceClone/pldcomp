#include <iostream>
#include <vector>

#include "antlr4-runtime.h"
#include "PLDCompLexer.h"
#include "PLDCompParser.h"
#include "PLDCompBaseVisitor.h"
#include "Generator.h"
#include "Test.h"

using namespace antlr4;
using namespace std;

const string BASE_TEST_FRONTEND_URL = "../test/frontend/";
const string BASE_TEST_BACKEND_URL = "../test/backend/";
const string BASE_TEST_CUSTOM_URL = "../test/custom/";

vector<string> lexErrorFiles = {
    BASE_TEST_FRONTEND_URL + "LexError/01_LexError_InvalidCharInStream.c",
    BASE_TEST_FRONTEND_URL + "LexError/02_LexError_InvalidCharInStreamWithinProgram.c"
};

vector<string> semanticErrorFiles = {
    BASE_TEST_FRONTEND_URL + "SemanticError/01_MissingVarDeclaration.c"
};

vector<string> syntaxErrorFiles = {
    BASE_TEST_FRONTEND_URL + "SyntaxError/01_SyntaxError_TwoOperators.c",
    BASE_TEST_FRONTEND_URL + "SyntaxError/02_SyntaxError_TwoOperands.c",
    BASE_TEST_FRONTEND_URL + "SyntaxError/03_SyntaxError_MissingSemicolon.c",
    BASE_TEST_FRONTEND_URL + "SyntaxError/04_SyntaxError_MissingPar.c",
    BASE_TEST_FRONTEND_URL + "SyntaxError/05_SyntaxError_TooManyClosingPar.c"
};

vector<string> validProgramsFiles = {
    BASE_TEST_FRONTEND_URL + "validPrograms/01_SimpleDeclaration.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/02_IncludeStdint.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/03_OperatorPlus.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/04_OperatorMinus.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/05_OperatorDiv.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/06_OperatorMult.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/07_OperatorInf.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/08_OperatorSup.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/09_OperatorLeq.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/10_OperatorGeq.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/11_OperatorEqu.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/12_OperatorDiff.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/13_OperatorMod.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/14_OperatorAnd.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/15_OperatorOr.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/16_OperatorBOr.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/17_OperatorBAnd.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/18_OperatorNeg.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/19_OperatorLeftShift.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/20_OperatorRightShift.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/21_OperatorIncPost.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/22_OperatorIncPre.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/23_OperatorDecPost.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/24_OperatorDecPre.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/25_OperatorNot.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/26_OperatorXor.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/27_OperatorComp.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/28_OperatorPlusAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/29_OperatorMinusAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/30_OperatorMultAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/31_OperatorDivAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/32_OperatorModAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/33_OperatorBitAndAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/34_OperatorBitOrAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/35_OperatorBitXorAssign.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/36_OperatorComma.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/37_Par.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/38_ArithmeticExpression.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/39_ArithmeticExpressionWithPar.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/40_If.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/41_IfElse.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/42_While.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/44_IfElseIf.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/46_ArrayDec.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/47_ArrayUse.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/49_ArrayFibo.c", 
    BASE_TEST_FRONTEND_URL + "validPrograms/50_CharConst.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/51_CharConstSpecial.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/52_Int64Dec.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/53_FunctionCallPutChar.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/54_FunctionCallCustom.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/55_Return.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/56_ArrayAsParam.c", 
    BASE_TEST_FRONTEND_URL + "validPrograms/57_VarInitialization.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/58_MultipleVarDeclarations.c",
    BASE_TEST_FRONTEND_URL + "validPrograms/59_MixedDeclarationsInitializations.c",
};

vector<string> backendFiles = {
    BASE_TEST_BACKEND_URL + "Back/1_decls.c",
    BASE_TEST_BACKEND_URL + "Back/1_empty.c",
    BASE_TEST_BACKEND_URL + "Back/2_putchar.c",
    BASE_TEST_BACKEND_URL + "Back/3_variables.c",
    BASE_TEST_BACKEND_URL + "Back/4-VarConstAddCall.c",
    BASE_TEST_BACKEND_URL + "Back/5-IfThenElse.c",
    BASE_TEST_BACKEND_URL + "Back/6-While.c",
    BASE_TEST_BACKEND_URL + "Back/7-testWhileAndVariables.c",
};

vector<string> customFiles = {
    BASE_TEST_CUSTOM_URL + "emptyMainFunction.c", // Not Working - TODO - mismatched input '}' expecting {'return', 'int', ID}
    // BASE_TEST_CUSTOM_URL + "emptyFile.c", // Not Working - TODO - Segmentation fault due to empty file - mismatched input '<EOF>' expecting 'int'
    BASE_TEST_CUSTOM_URL + "declarationWithoutAssignement.c",
    BASE_TEST_CUSTOM_URL + "declarationWithAssignement.c",
    BASE_TEST_CUSTOM_URL + "returnValue.c",
    BASE_TEST_CUSTOM_URL + "returnVariable.c",
    BASE_TEST_CUSTOM_URL + "expressionWithParentheses.c", 
    BASE_TEST_CUSTOM_URL + "additionOperation.c",
    BASE_TEST_CUSTOM_URL + "substractionOperation.c",
    BASE_TEST_CUSTOM_URL + "multiplicativeOperation.c",
    BASE_TEST_CUSTOM_URL + "divisiveOperation.c",
    BASE_TEST_CUSTOM_URL + "moduloOperation.c",
    BASE_TEST_CUSTOM_URL + "negativeExpressionWithParentheses.c", // Not working - TODO - Error in the asm: number of operands mismatch for `neg'
    BASE_TEST_CUSTOM_URL + "negativeExpressionWithoutParentheses.c", // Not working - TODO - Error: no viable alternative at input '-a' Exception caught 'std::bad_cast'
    // BASE_TEST_CUSTOM_URL + "miParcoursTest.c", // Not Working - TODO - Compilation failed due to one ligne assignement
    BASE_TEST_CUSTOM_URL + "multipleAssignementLine.c", // Not Working - TODO - Compilation failed due to one ligne assignement
    BASE_TEST_CUSTOM_URL + "multipleOperationsLine.c", // Not Working - TODO - Compilation failed due to one ligne assignement
    BASE_TEST_CUSTOM_URL + "customTest.c",

};


void Test::lexErrorTests() {
    cout << endl << endl << "*--------------------->LEXER ERROR TESTS<--------------------*" << endl << endl;
    for (int i=0 ; i<lexErrorFiles.size() ; i++) {
        cout << "Fichier : " << lexErrorFiles[i] << endl;
        
        ifstream file(lexErrorFiles[i]);
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));

        ANTLRInputStream input (content);
        PLDCompLexer lexer (&input);
        CommonTokenStream token (&lexer);
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();

        Generator visitor("out.asm");
        try {
            visitor.visit(tree);
            cout << "Compilation Success!" << endl << endl;
        } catch (int i) {
            remove("out.asm");
            cout << "Compilation failed! " << endl << endl;
        } catch (exception& e) {
            remove("out.asm");
            cout << "Exception caught '" << e.what() << endl << endl;
        }
    }
}


void Test::semanticErrorTests() {
    cout << endl << endl << "*--------------------->SEMANTIC ERROR TESTS<--------------------*" << endl << endl;
    for (int i=0 ; i<semanticErrorFiles.size() ; i++) {
        cout << "Fichier : " << semanticErrorFiles[i] << endl;

        ifstream file(semanticErrorFiles[i]);
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));

        ANTLRInputStream input (content);
        PLDCompLexer lexer (&input);
        CommonTokenStream token (&lexer);
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();

        Generator visitor("out.asm");

        try {
            visitor.visit(tree);
            cout << "Compilation Success!" << endl << endl;
        } catch (int i) {
            remove("out.asm");
            cout << "Compilation failed! " << endl << endl;
        } catch (exception& e) {
            remove("out.asm");
            cout << "Exception caught '" << e.what() << endl << endl;
        }
    }
}


void Test::syntaxErrorTests() {
    cout << endl << endl << "*--------------------->SYNTAX ERROR TESTS<--------------------*" << endl << endl;
    for (int i=0 ; i<syntaxErrorFiles.size() ; i++) {
        cout << "Fichier : " << syntaxErrorFiles[i] << endl;

        ifstream file(syntaxErrorFiles[i]);
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));

        ANTLRInputStream input (content);
        PLDCompLexer lexer (&input);
        CommonTokenStream token (&lexer);
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();

        Generator visitor("out.asm");

        try {
            visitor.visit(tree);
            cout << "Compilation Success!" << endl << endl;
        } catch (int i) {
            remove("out.asm");
            cout << "Compilation failed! " << endl << endl;
        } catch (exception& e) {
            remove("out.asm");
            cout << "Exception caught '" << e.what() << endl << endl;
        }
    }
}


void Test::validProgramsTests() {
    cout << endl << endl << "*--------------------->VALID PROGRAMS TESTS<--------------------*" << endl << endl;
    for (int i=0 ; i<validProgramsFiles.size() ; i++) {
        cout << "Fichier : " << validProgramsFiles[i] << endl;

        ifstream file(validProgramsFiles[i]);
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));

        ANTLRInputStream input (content);
        PLDCompLexer lexer (&input);
        CommonTokenStream token (&lexer);
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();

        Generator visitor("out.asm");

        try {
            visitor.visit(tree);
            cout << "Compilation Success!" << endl << endl;
        } catch (int i) {
            remove("out.asm");
            cout << "Compilation failed! " << endl << endl;
        } catch (exception& e) {
            remove("out.asm");
            cout << "Exception caught '" << e.what() << endl << endl;
        }
    }
}


void Test::backendTests() {
    cout << endl << endl << "*--------------------->BACKEND TESTS<--------------------*" << endl << endl;
    for (int i=0 ; i<backendFiles.size() ; i++) {
        cout << "Fichier : " << backendFiles[i] << endl;

        ifstream file(backendFiles[i]);
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));

        ANTLRInputStream input (content);
        PLDCompLexer lexer (&input);
        CommonTokenStream token (&lexer);
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();

        Generator visitor("out.asm");

        try {
            visitor.visit(tree);
            cout << "Compilation Success!" << endl << endl;
        } catch (int i) {
            remove("out.asm");
            cout << "Compilation failed! " << endl << endl;
        } catch (exception& e) {
            remove("out.asm");
            cout << "Exception caught '" << e.what() << endl << endl;
        }
    }
}


void Test::customTests() {
    cout << endl << endl << "*--------------------->CUSTOM TESTS<--------------------*" << endl << endl;
    for (int i=0 ; i<customFiles.size() ; i++) {
        cout << "Fichier : " << customFiles[i] << endl;

        ifstream file(customFiles[i]);
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));

        ANTLRInputStream input (content);
        PLDCompLexer lexer (&input);
        CommonTokenStream token (&lexer);
        PLDCompParser parser (&token);
        tree::ParseTree * tree = parser.prog();

        Generator visitor("out.asm");

        try {
            visitor.visit(tree);
            cout << "Compilation Success!" << endl << endl;
        } catch (int i) {
            remove("out.asm");
            cout << "Compilation failed! " << endl << endl;
        } catch (exception& e) {
            remove("out.asm");
            cout << "Exception caught '" << e.what() << endl << endl;
        }
    }
}