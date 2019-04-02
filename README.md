# PLD Comp

## Useful commands

### ANTLR Code Generation

```
antlr4 -visitor -no-listener -Dlanguage=Cpp PLDComp.g4
```

### Testing command

```
as -o out.o out.asm && gcc out.o && ./a.out
echo $?
```