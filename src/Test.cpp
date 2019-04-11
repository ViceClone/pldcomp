#include <iostream>
#include <vector>
#include <stdio.h> 
#include <stdlib.h>

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
    BASE_TEST_CUSTOM_URL + "emptyMainFunction.c", // PASSED
    BASE_TEST_CUSTOM_URL + "emptyFile.c", // PASSED
    BASE_TEST_CUSTOM_URL + "declarationWithoutAssignment.c", // PASSED
    // BASE_TEST_CUSTOM_URL + "doubleDeclaration.c", //PASSED - Segmentation fault
    BASE_TEST_CUSTOM_URL + "declarationWithAssignment.c", //PASSED
    // BASE_TEST_CUSTOM_URL + "assignementWithoutDeclaration.c", // PASSED - Segmentation fault
    BASE_TEST_CUSTOM_URL + "declarationAssignmentEmptyRight.c", // PASSED
    // BASE_TEST_CUSTOM_URL + "doubleDeclarationWithAssignement.c", // //PASSED - Segmentation fault
    BASE_TEST_CUSTOM_URL + "returnValue.c", // PASSED
    BASE_TEST_CUSTOM_URL + "returnVariable.c", // PASSED
    BASE_TEST_CUSTOM_URL + "expressionWithParentheses.c", // PASSED
    BASE_TEST_CUSTOM_URL + "additionOperation.c", // PASSED
    BASE_TEST_CUSTOM_URL + "substractionOperation.c", // PASSED
    BASE_TEST_CUSTOM_URL + "multiplicativeOperation.c", // PASSED
    BASE_TEST_CUSTOM_URL + "divisiveOperation.c", // PASSED
    BASE_TEST_CUSTOM_URL + "moduloOperation.c", // PASSED
    BASE_TEST_CUSTOM_URL + "negativeExpressionWithParentheses.c", // PASSED
    BASE_TEST_CUSTOM_URL + "negativeExpressionWithoutParentheses.c", // NOT PASSED - 'line 3:13 no viable alternative at input '-a' 
                                                                    //Exception caught ERROR: -1 syntax errors found SyntaxException Compilation failed!'
    BASE_TEST_CUSTOM_URL + "miParcoursTest.c", // NOT PASSED - line 3:9 no viable alternative at input 'inta,' Exception caught ERROR: -1 syntax errors found
                                                                    // SyntaxException Compilation failed!
    BASE_TEST_CUSTOM_URL + "multipleDeclarationLine.c", // NOT PASSED - line 2:9 no viable alternative at input 'inta,' 
    BASE_TEST_CUSTOM_URL + "multipleOperationsLine.c", // PASSED
    BASE_TEST_CUSTOM_URL + "customTest.c", // PASSED
    BASE_TEST_CUSTOM_URL + "irtest.c", // PASSED
};

/* Test Functions */

void Test::lexErrorTests(std::ofstream& testLogStream) {
    runTest(testLogStream, "LEXER ERROR TESTS", lexErrorFiles);
}


void Test::semanticErrorTests(std::ofstream& testLogStream) {
    runTest(testLogStream, "SEMANTIC ERROR TESTS", semanticErrorFiles);
}


void Test::syntaxErrorTests(std::ofstream& testLogStream) {
    runTest(testLogStream, "SYNTAX ERROR TESTS", syntaxErrorFiles);
}


void Test::validProgramsTests(std::ofstream& testLogStream) {
    runTest(testLogStream, "VALID PROGRAMS TESTS", validProgramsFiles);
}


void Test::backendTests(std::ofstream& testLogStream) {
    runTest(testLogStream, "BACKEND TESTS", backendFiles);
}

void Test::customTests(std::ofstream& testLogStream) {
    runTest(testLogStream, "CUSTOM TESTS", customFiles);
}

void Test::runTests() {
    ofstream testLogStream;
    testLogStream.open("test.log"); 
    lexErrorTests(testLogStream);
    semanticErrorTests(testLogStream);
    syntaxErrorTests(testLogStream);
    validProgramsTests(testLogStream);
    backendTests(testLogStream);
    customTests(testLogStream);
    testLogStream.close();
}

/* The Testing Function */

void Test::runTest(std::ofstream& testLogStream, string testName, vector<string> testFiles) {
    for (int i=0 ; i<testFiles.size() ; i++) {

        /* Test Error Output */
        std::cerr << endl << "*--------------------->" << testName << "<--------------------*" << endl;
        std::cerr << endl << "\t-----------------------------------------\t" << endl;
        std::cerr << endl << "File " << i+1 << " : " << testFiles[i] << endl << endl;

        /* Test Error Log */
        testLogStream << endl << "*--------------------->" << testName << "<--------------------*" << endl;
        testLogStream << endl << "\t-----------------------------------------\t" << endl;
        testLogStream << endl << "File " << i+1 << " : " << testFiles[i] << endl << endl;

        ifstream file(testFiles[i]);
        Util::read_file(testFiles[i]);
        Util::log_file(testLogStream, testFiles[i]);
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
        
        try {
            /* Lexer */
            ANTLRInputStream input (content);
            PLDCompLexer lexer (&input);
            vector<unique_ptr<Token>> list_token = lexer.getAllTokens();
            lexer.reset();
            int n_lex_errors = 0;
            string lex_errors = "";
            for (auto it=list_token.begin(); it!=list_token.end();++it) {
                if ((*it)->getType()==21) {
                    lex_errors = lex_errors + "line " + (char*) (*it)->getLine() +  ":" + (char*) (*it)->getCharPositionInLine() 
                        +  " unrecognized token \'" +  (*it)->getText() +  "\'";
                    n_lex_errors++;
                }
            }

            if (n_lex_errors>0) {
                LexerException lexerException;
                lexerException.setLexerErrors(lex_errors + ", number of lexer errors : " + (char*) n_lex_errors);
                throw lexerException;
            }    
            CommonTokenStream token (&lexer);

            /* Parser */
            token.reset();
            PLDCompParser parser (&token);
            tree::ParseTree * tree = parser.prog();
            int n_syntax_errors = parser.getNumberOfSyntaxErrors();
            if (n_syntax_errors>0) {
                SyntaxException syntaxException;
                syntaxException.setNumberSyntaxErrors(n_syntax_errors);
                throw syntaxException;
            }
            
            IRGenerator visitor;
            visitor.visit(tree);

            std::cerr << "Compilation Success!" << endl;
            testLogStream << "Compilation Success!" << endl;
        } catch (exception& e) {
            std::cerr << "Exception caught " << e.what() << endl << "Compilation failed!" << endl;
            testLogStream << "Exception caught " << e.what() << endl << "Compilation failed!" << endl;
        }
    }
    
}

