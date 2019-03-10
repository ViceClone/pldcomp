grammar PLDComp;

prog: declaration ;

declaration : type ID '(' ')' '{' statementseq '}'; 

statementseq : statement+;

statement : returnstatement;

returnstatement : 'return' expr ';' ;
expr : INT # const
    | '(' expr ')' # par
    ;

type : 'int';

RETURN: 'return';
ID : [a-zA-Z_] [a-zA-Z0-9_]*;
INT : [0-9]+ ;
SEMICOLON: ';';
RightBrace: '}';
LeftBrace : '{';
LeftParen : '(';
RightParen : ')';
Whitespace : [ \t]+ -> skip;