type_variable : 'char' | 'int';

type_function : 'char' | 'int'; 

exp : NOMBRE # constanteNombre
    | lvalue '=' exp # affectation ;

lvalue : NOMVAR # variable ;

instruction : 'return' exp ';' ; # returnInstruction

param : 'void' # void
        | type_variable NOMVAR (',' type_variable NOMVAR)* ; # parametres

fonction : type_function NOMVAR '(' param ')' '{'declaration_variables bloc '}' # declarationFonctionParams
        | type_function NOMVAR '(' ')' '{' declaration_variables bloc '}' ; # declarationFonction 

NOMVAR : [a-zA-Z][a-zA-Z0-9]* ;
NOMBRE : [0-9]+ ;