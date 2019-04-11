grammar PLDComp;

prog: functiondefinition+ EOF;

functiondefinition : type ID '('(type ID (',' type ID)*)? ')' '{' statementseq '}'
    ;

statementseq : statement*;

statement : vardeclaration 
    | ifstatement
    | whilestatement
    | forstatement
    | callstatement
    | returnstatement
    | assignmentstat
    ;

ifstatement: 'if' '(' expr ')' '{' statementseq '}' 
            ('else' '{' statementseq '}')?;

whilestatement: 'while' '(' expr ')' '{' statementseq '}';

forstatement: 'for' '(' assignmentstat ';' expr ';' assignmentstat ')' '{ ' statementseq '}';

callstatement : call ';'
    ;

call : ID '(' (expr (',' expr)*)? ')';

vardeclaration : type ID '=' expr ';' # DeclWithAssignment
    | type ID ';' #DeclWithoutAssignment
    | type ID '[' INT ']' ('=' '{' (expr (',' expr)*)? '}')?';' # DeclArray
    ;

assignmentstat : lvalue '=' expr ';' #AssignmentExpr
    ;

lvalue : ID # idL
    | array # arrayL
    ;

array: ID '[' expr ']';

returnstatement : 'return' expr ';' ;

expr : '(' expr ')' # Par
    | array # ArrayExpr
    | '-' '(' expr ')' # NegExpr
    | call # CallExpr
    | expr op=('*' | '/' | '%' ) expr # MultiplicativeOp
    | expr op=('+' | '-') expr # AdditiveOp
    | expr relop=('>' | '<' | '>=' | '<=') expr # Rel1Expr
    | expr relop=('==' | '!=') expr # Rel2Expr
    | expr '&' expr # BitwiseAnd
    | expr '^' expr # BitwiseXor
    | expr '|' expr # BitwiseOr
    | expr '&&' expr # LogicalAnd
    | expr '||' expr # LogicalOr
    | INT # Const
    | '-' INT # NegConst
    | CHAR # CharConst
    | ID # Var
    ;

type : 'int' | 'char' | 'void';

RETURN: 'return';
INT_TYPE: 'int';
CHAR_TYPE: 'char';
VOID_TYPE: 'void';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
CHAR : '\'' (~['\\\r\n] | '\\' ['"?abfnrtv\\]) '\'';
ID : [a-zA-Z_][a-zA-Z_0-9]*;
INT : [0-9]+ ;

LESS : '<';
LESSEQUAL : '<=';
GREATER : '>';
GREATEREQUAL : '>=';

EQUAL : '==';
NOTEQUAL : '!=';

AND : '&';
OR : '|' ;
ANDAND : '&&';
OROR : '||';
CARET : '^';
TILDE : '~';

PRIME: '\'';
BACKSLASH: '\\';
ASSIGN: '=';
SEMICOLON: ';';
COMMA : ',';
RIGHT_BRACE: '}';
LEFT_BRACE : '{';
LEFT_PARENTHESE : '(';
RIGHT_PARENTHESE : ')';
PLUS : '+';
MINUS : '-';
STAR : '*';
DIV : '/';
MOD : '%';
WHITESPACE : [ \t]+ -> skip;
NEWLINE : ('\r' '\n'? | '\n') -> skip;
BLOCKCOMMENT : '/*' .*? '*/' -> skip;
LINECOMMENT :'//' ~[\r\n]* -> skip;

ERROR
    : .
    ;