CPP=g++
CFLAGS= -std=c++11 -I antlr4-runtime/ -DDEBUG
DEPS = PLDCompVisitor.h PLDCompParser.h PLDCompLexer.h PLDCompBaseVisitor.h IRGenerator.h IR.h Test.h 
OBJ = $(DEPS:.h=.o) lib/libantlr.so CompilerMain.cpp
EXE = comp
TEST = test
OBJ_TEST = $(DEPS:.h=.o) lib/libantlr.so main.cpp


comp: $(OBJ)
	$(CPP) -o $(EXE) $^ $(CFLAGS)

%.o: %.cpp $(DEPS)
	$(CPP) -c -o $@ $< $(CFLAGS)

clean:
	rm -rf *.o comp a.out out.asm

test: $(OBJ_TEST)
	$(CPP) -o $(TEST) $^ $(CFLAGS)
