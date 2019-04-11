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

### Testing command

```c
./comp irtest.c && as -o out.o out.asm && gcc out.o && ./a.out
echo $?
```
