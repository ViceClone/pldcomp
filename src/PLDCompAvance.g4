grammar Expr;

type_variable : 'char' | 'int';

type_function : 'char' | 'int'; 

exp : NOMBRE 
    | lvalue '=' exp ;  

lvalue : NOMVAR ;  

instruction : 'return' exp ';' ; 

param : 'void' 
        | type_variable NOMVAR (',' type_variable NOMVAR)* ; 

fonction : type_function NOMVAR '(' param ')' '{' '}' 
        | type_function NOMVAR '(' ')' '{' '}' ;  

NOMVAR : [a-zA-Z][a-zA-Z0-9]* ;
NOMBRE : [0-9]+ ;