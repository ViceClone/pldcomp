grammar PLDComp;

prog: declaration EOF;

declaration : type ID '(' ')' '{' statementseq '}'; 

statementseq : (statement ';')+;

statement :  vardeclaration
    | returnstatement
    | assignmentstat
    ;

vardeclaration : type ID# DeclWithoutAssignment
    | type ID '=' INT # DeclWithAssignment
    | type ID '=' ID  # DeclWithAssignmentID
    ;

assignmentstat : ID '=' INT  # AssignmentINT
    | ID '=' ID  # AssignmentID
    ;

returnstatement : 'return' expr ';' ;

expr : INT # const
    | ID # var
    | '(' expr ')' # par
    ;

type : 'int';

RETURN: 'return';
INT_TYPE: 'int';
ID : [a-zA-Z_] [a-zA-Z0-9_]*;
INT : ('-')?[0-9]+ ;
ASSIGNMENT: '=';
SEMICOLON: ';';
RIGHT_BRACE: '}';
LEFT_BRACE : '{';
LEFT_PARENTHESE : '(';
RIGHT_PARENTHESE : ')';
WHITESPACE : [ \t]+ -> skip;
NEWLINE : ('\r' '\n'? | '\n') -> skip;