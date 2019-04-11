# PLD Comp

## Useful commands

### Build

```c
make clean
make
```

### Tests run

```c
make test
```

### ANTLR Code Generation

```c
antlr4 -visitor -no-listener -Dlanguage=Cpp PLDComp.g4
```

### Compiling A File
File extension must be .c. Input: file.c --> Output: file.asm
```
./comp filename
```
### Testing command

```
./comp irtest.c && as -o irtest.o irtest.asm && gcc irtest.o && ./a.out
echo $?
```
