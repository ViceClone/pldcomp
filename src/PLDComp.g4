grammar Expr;

type_variable : 'char' | 'int';

type_function : 'char' | 'int'; 

exp : NOMBRE # constanteNombre
    | lvalue '=' exp  ;

lvalue : NOMVAR # variable ;

instruction : 'return' exp ';' ; 

param : 'void' # void
        | type_variable NOMVAR (',' type_variable NOMVAR)* ;

fonction : type_function NOMVAR '(' param ')' '{'declaration_variables bloc '}'  declarationFonctionParams
        | type_function NOMVAR '(' ')' '{' declaration_variables bloc '}' ; 

NOMVAR : [a-zA-Z][a-zA-Z0-9]* ;
NOMBRE : [0-9]+ ;
