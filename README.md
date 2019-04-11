# PLD Comp

## Useful commands

### Build
```
make clean
make
```

### ANTLR Code Generation

```
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
