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
    | expr '*' expr # MultOp
    | expr '/' expr # DivOp
    | expr '%' expr # ModOp
    | expr '+' expr # AddOp
    | expr '-' expr # SubOp
    | INT # const
    | ID # var
    | '-' '(' expr ')' # NegExpr
    | '-' INT # NegInt
    ;

type : 'int';

RETURN: 'return';
INT_TYPE: 'int';
ID : [a-zA-Z_] [a-zA-Z0-9_]*;
INT : ('-')?[0-9]+ ;
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