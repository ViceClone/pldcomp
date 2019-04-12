# PLD Comp

## Useful commands

### Build
Build from directory ./src
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
Firstly, this project takes a lot of time and effort (and a bunch of Red Bull to stay awake). And for me, I would say, the project is quite interesting as I learned a lot from playing around with things like grammars, assembly code, a bunch of compiler (gcc, clang, icc). Even though. I am not satisfied with the outcomes of our project (maybe neither are you), it was a lot of fun doing this kind of thing. (Cao Xuân Huy)

Joke aside, let jump into what we've done.

### Expression vs. Statement
Expression is everything that gives back a value in a program i.e. constants, variables, arithmetic operations, function call. The value returned is, in most cases, stocked inside a temporary memory address.

By contrast, we do not care about the value return by a statement. Instead, how a statement behaves is what matters the most. For example, a statement is a line of code terminating with an ';'. Some expression can become a statement by adding a semicolon at the end. Blocks code, if-else structure are counted as statement as well.

### Memory management
In the effort of optimizing memory management, after every single statement, we reset the temporary memory address, that means we pull it back to the first memory address which has not been used by permanent variables. Even though, due to the lack of time, we are not use if some parts of memory management will be working as intended.

### A list non-exhaustive of what we have done
#### Type
`char`, `char[]`, `int`, `int[]` are implemented, even though `char` is basically an `int` as they all use 4 bytes of memory.
#### Statements
* Variable Declaration: A variable cannot be declared more than one time and multiple declarations with assignment are not possible
```c
int a,b,c;
int d = 10;
char e = 'a';
char f = 97;
char str[100] = {'c','a','o',' ','x','u','a','n',' ','h','u','y','\n',0};
```