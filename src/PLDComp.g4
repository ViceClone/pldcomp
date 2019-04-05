grammar PLDComp;

prog: functiondefinition+ EOF;

functiondefinition : type ID '('(type ID (',' type ID)*)? ')' '{' statementseq '}'
    ;

statementseq : statement+;

statement : vardeclaration 
    | callstatement
    | returnstatement
    | assignmentstat
    ;

callstatement : call ';'
    ;

call : ID '(' (expr (',' expr)*)? ')';

vardeclaration : type ID '=' expr ';' # DeclWithAssignment
    | type ID ';' #DeclWithoutAssignment
    ;

assignmentstat : ID '=' expr ';' #AssignmentExpr
    ;

returnstatement : 'return' expr ';' ;

expr : '(' expr ')' # Par
    | '-' '(' expr ')' # NegExpr
    | call # CallExpr
    | expr op=('*' | '/' | '%' ) expr # MultiplicativeOp
    | expr op=('+' | '-') expr # AdditiveOp
    | INT # Const
    | '-' INT # NegConst
    | ID # Var
    ;

type : 'int';

RETURN: 'return';
INT_TYPE: 'int';
ID : [a-zA-Z_] [a-zA-Z0-9_]*;
INT : [0-9]+ ;
ASSIGN: '=';
SEMICOLON: ';';
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