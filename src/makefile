CPP=g++
CFLAGS= -std=c++11 -I antlr4-runtime/ -O1
DEPS = PLDCompVisitor.h PLDCompParser.h PLDCompLexer.h PLDCompBaseVisitor.h IRGenerator.h IR.h
OBJ = $(DEPS:.h=.o) lib/libantlr.so CompilerMain.cpp
EXE = comp


comp: $(OBJ)
	$(CPP) -o $(EXE) $^ $(CFLAGS)

%.o: %.cpp $(DEPS)
	$(CPP) -c -o $@ $< $(CFLAGS)

clean:
	rm -rf *.o comp a.out out.asm

test:
	echo "---------------EXECUTING TEST---------------"
