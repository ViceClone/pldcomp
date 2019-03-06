grammar PLDComp;

prog: 'int main() {' return_instruction '}' ;

return_instruction : 'return ' INT ';' ;

INT : [0-9]+ ;