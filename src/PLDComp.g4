grammar PLDComp;

prog: functiondefinition* EOF;

functiondefinition : type ID '('((type ID (',' type ID)*)|'void')? ')' '{' statementseq '}'
    ;

statementseq : statement*;

statement : vardeclaration 
    | ifstatement
    | whilestatement
    | forstatement
    | callstatement
    | returnstatement
    | assignmentstat
    | incrdecrstatement
    | compoundassignmentstatement
    ;

ifstatement: 'if' '(' expr ')' '{' statementseq '}' 
            ('else' '{' statementseq '}')?;

whilestatement: 'while' '(' expr ')' '{' statementseq '}';

forstatement: 'for' '(' assignmentstat ';' expr ';' assignmentstat ')' '{ ' statementseq '}';

callstatement : call ';'
    ;

call : ID '(' (expr (',' expr)*)? ')';

vardeclaration : type ID '=' expr ';' # DeclWithAssignment
    | type ID (',' ID)* ';' #DeclWithoutAssignment
    | type ID '[' INT ']' ('=' '{' (expr (',' expr)*)? '}')?';' # DeclArray
    ;

assignmentstat : lvalue '=' expr ';' #AssignmentExpr
    ;

lvalue : ID # idL
    | array # arrayL
    ;

array: ID '[' expr ']';

returnstatement : 'return' expr ';' ;

incrdecrstatement : incr_decr ';';

incr_decr : ((ID | array) incr_decr_op) 
    | (incr_decr_op (ID | array)) 
    ;

incr_decr_op : '++'|'--';

compoundassignment : (ID | array) op=('+='|'-='|'*='|'/='|'|='|'&='|'^='|'%=') expr;

compoundassignmentstatement : compoundassignment ';';

expr : '(' expr ')' # Par
    | array # ArrayExpr
    | '-' expr # NegExpr
    | incr_decr # IncDecExpr
    | call # CallExpr
    | expr op=('*' | '/' | '%' ) expr # MultiplicativeOp
    | expr op=('+' | '-') expr # AdditiveOp
    | expr op=('>>'|'<<') expr # ShiftOp
    | expr relop=('>' | '<' | '>=' | '<=') expr # Rel1Expr
    | expr relop=('==' | '!=') expr # Rel2Expr
    | expr '&' expr # BitwiseAnd
    | expr '^' expr # BitwiseXor
    | expr '|' expr # BitwiseOr
    | expr '&&' expr # LogicalAnd
    | expr '||' expr # LogicalOr
    | compoundassignment # CompoundAssignmentExpr
    | INT # Const
    | '-' INT # NegConst
    | CHAR # CharConst
    | ID # Var
    ;

type : 'int' | 'int32_t' | 'char' | 'void';

RETURN: 'return';
INT_TYPE: 'int';
INT32_TYPE: 'int32_t';
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

PLUSPLUS: '++';
MINUSMINUS: '--';

SHIFTL: '<<';
SHIFTR: '>>';

ADDE: '+=';
SUBE: '-=';
MULE: '*=';
DIVE: '/=';
MODE: '%=';
ORE: '|=';
XORE: '^=';
ANDE: '&=';

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
DIRECTIVE : '#' WHITESPACE? ~[\r\n]*-> skip;

ERROR
    : .
    ;