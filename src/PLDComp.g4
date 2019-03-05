
grammar PLDComp;

prog: 'int main() {' return_instruction '}' ;

return_instruction : 'return' NOMBRE ';' ;

NOMBRE : [0-9]+ ;