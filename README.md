# PLD Comp

## Useful commands

### Build
Build from directory ./src
```
cd ./src
```
#### ANTLR Code Generation
Normally, antlr4 has already been run, but if you want to do it again, execute the following command
```c
antlr4 -visitor -no-listener -Dlanguage=Cpp PLDComp.g4
```
#### Build the project
In ./src, execute
```c
make
```

### Compiling A File
Input file's extension must be .c. Input: file.c --> Output: file.asm
In ./bin, execute
```
./comp filename
```
### Testing command
Firstly, change directory from {maindir} to ./bin
```
cd ./bin
```

#### Compiling and executing single file
```
./demo.sh filename.c
```
#### Compiling and executing multiple file
Put all your .c file into {maindir}/test folder and run
```
./test.sh [logfile]
```
If logfile is not defined, results are in ./test/test.log
