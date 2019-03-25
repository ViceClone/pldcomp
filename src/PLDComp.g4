grammar PLDComp;

prog: declaration EOF;

declaration : type ID '(' ')' '{' statementseq '}'; 

statementseq : statement+;

statement :  vardeclaration
    | returnstatement
    | assignmentstat
    ;

vardeclaration : type ID '=' expr ';' # DeclWithAssignment
    | type ID ';' #DeclWithoutAssignment
    ;

assignmentstat : ID '=' expr ';' #AssignmentExpr
    ;

returnstatement : 'return' expr ';' ;

expr : '(' expr ')' # Par
    | '-' '(' expr ')' # NegExpr
    | expr op=('*' | '/' | '%' ) expr # MultiplicativeOp
    | expr op=('+' | '-') expr # AdditiveOp
    | INT # Const
    | '-' INT # NegConst
    | '-' '(' expr ')' #NegExpr
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