grammar PLDComp;

prog: declaration EOF;

declaration : TYPE ID LEFT_PARENTHESE RIGHT_PARENTHESE RIGHT_BRACE statementseq RIGHT_BRACE; 

statementseq : statement+;

statement : returnstatement;

returnstatement : RETURN expr SEMICOLON ;
expr : INT # const
    | LEFT_PARENTHESE expr RIGHT_PARENTHESE # par
    ;

TYPE : 'int';

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