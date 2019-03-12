grammar PLDComp;

prog: declaration EOF;

declaration : type ID '(' ')' '{' statementseq '}'; 

statementseq : statement+;

statement : returnstatement;

vardeclaration : type ID # DeclWithAssignment
    | type assignmentstat # DeclWithoutAssignment
    ;

assignmentstat : ID '=' expr;

returnstatement : 'return' expr ';' ;
expr : INT # const
    | '(' expr ')' # par
    ;

type : 'int';

RETURN: 'return';
ID : [a-zA-Z_] [a-zA-Z0-9_]*;
INT : [0-9]+ ;
ASSIGNMENT: '=';
SEMICOLON: ';';
RIGHT_BRACE: '}';
LEFT_BRACE : '{';
LEFT_PARENTHESE : '(';
RIGHT_PARENTHESE : ')';
WHITESPACE : [ \t]+ -> skip;
NEWLINE : ('\r' '\n'? | '\n') -> skip;