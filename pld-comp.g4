exp : NOMBRE # constanteNombre

instruction : 'return' exp ';' # returnInstruction
NOMBRE : [0-9]+ ;

param : 'void' # void
        | type_variable NOMVAR (',' type_variable NOMVAR)* # parametres;
fonction : type_function NOMVAR '(' param ')' '{'declaration_variables bloc '}' # declarationFonctionParams
        | type_function NOMVAR '(' ')' '{' declaration_variables bloc '}' # declarationFonction ;