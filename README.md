# PLD Comp

## Useful commands

### Build
Change directory to ./src
```bash
cd ./src
```
#### ANTLR Code Generation
Normally, antlr4 has already been run, but if you want to do it again, execute the following command
```bash
antlr4 -visitor -no-listener -Dlanguage=Cpp PLDComp.g4
```
#### Build the project
In ./src, execute
```bash
make
```

### Compiling A File
Input file's extension must be .c. Input: file.c --> Output: file.asm
In ./bin, execute
```bash
./comp filename
```
### Testing command
Firstly, change directory from {maindir} to ./bin
```bash
cd ./bin
```

#### Compiling and executing single file
```bash
./demo.sh filename.c
```
#### Compiling and executing multiple file
Put all your .c file into {maindir}/test folder and run
```bash
./test.sh [logfile]
```
If logfile is not defined, results are saved in ./test/test.log

## What can this useless compiler even do?

* Firstly, this project takes a lot of time and effort (and a bunch of Red Bull to stay awake). And for me, I would say, the project is quite interesting as I learned a lot from playing around with things like grammars, assembly code, a bunch of compiler (gcc, clang, icc). Even though. I am not satisfied with the outcomes of our project (maybe neither are you), it was a lot of fun doing this kind of thing. (Cao Xuân Huy)

* Having to work on this project showed us how we can build a minimal compiler functionalities with grammars, lexers,  parsers, intermediate representations, execute automatic tests and working as a team on a project. It sure was a university project but we were able to manage it as it we a professional one. Had ups and downs but in the final we managed to make a good delivrable up to the awaited standards by our professors. (Amine M. Boulouma)

Joke aside, let jump into what we've done.

### Expression vs. Statement
Expression is everything that gives back a value in a program i.e. constants, variables, arithmetic operations, function call. The value returned is, in most cases, stocked inside a temporary memory address.

By contrast, we do not care about the value return by a statement. Instead, how a statement behaves is what matters the most. For example, a statement is a line of code terminating with an ';'. Some expression can become a statement by adding a semicolon at the end. Blocks code, if-else structure are counted as statement as well.

### Memory management
In the effort of optimizing memory management, after every single statement, we reset the temporary memory address, that means we pull it back to the first memory address which has not been used by permanent variables. Even though, due to the lack of time, we are not use if some parts of memory management will be working as intended.

### Error handling
Considering lexical errors, as they are not handled automatically by antlr4, we create a lex rule `ERROR: .;` at the least prioritized token of the lexer. If a token reach this level, it will produce a lexer exception.

Syntax errors are handled directly by antlr4.

Code generating errors produce an exception to the main compiler program. Once an exception is spotted, the compiler will stop its work.
### A list non-exhaustive of what we have done so far
#### Type
`char`, `char[]`, `int`, `int[]`, `int32_t` are implemented, even though `char` is basically an `int` as they all use 4 bytes of memory.
#### Statements
* Variable Declaration: A variable cannot be declared more than one time and multiple declarations with assignment are not possible
```c
int a,b,c;
int d = 10;
char e = 'a';
char f = 97;
char str[100] = {'c','a','o',' ','x','u','a','n',' ','h','u','y','\n',0};
```
* Assignment Statement: LHS can be a variable or an array occurence, RHS is an expression
```c
a = 32;
a = a>>3;
b = a++;
```
* If-Else statement: The compiler can understand an if-else complete structure or an if-without-else structure. Multiple condition structure 'else if' has not been implemented yet. Logical operations (and, or) have not been implemented either. The compiler will make some **warning** if some line of code cannot be reached.
```c
if (a==1) {
    if (func(a,b)) {
        evaluateThisTeam(20);
    } else {
        evaluateThisTeam(19);
    }
}
```
* While Loop: Same problem with If-Else Statement, we have not done logical operations yet. During this project, we spotted some critical erros in the lecture notes which caused If-Else Statement and While-Loop not being able to be put inside another. We found the solution that all the basic blocks must be linked before building the statement's body.
```c
// this is an infinite loop btw
while (1) {
    putchar('a');
}
```
* Function Call: Only function with less than 6 parameters can be called, otherwise, the compiler does not understand what you say.
```c
evaluateThisTeam(20,a,b,c,d[1],x+10*5>>3);
```
* Compound Assignment: Single assigment such as `a+=b+10*5-1<3` is possible, but `a+=a+=a` is not.
```
a+=1;
b+=a+10;
```
* Suffix/Postfix increment/decrement: LHS can only be a variable name
```c
a++;
```

#### Expressions
* Constant and variable: `int`, `int32_t`, `char`.
* Array Occurence:
```
int x = a[12>>1];
```
* Arithmetic expression: addition, multiplication, division, modulo, relation operations (<,>,<=,>=,==,!=), shift, bitwise operations,... Hmm except logical operations have not been implemented as we need to seperate their role in If-Else, While-Loop vs. a returning-value expression.
* Function Call: return value cannot be an array yet.
```c
int32_t blackhole = getphoto('f');
```
* Suffix/Postfix increment/decrement: Mentionned above.
* Compound Assignment: Mentionned above.