CPP=g++
CFLAGS= -std=c++11 -I antlr4-runtime/ -DDEBUG
DEPS = PLDCompVisitor.h PLDCompParser.h PLDCompLexer.h PLDCompBaseVisitor.h IRGenerator.h IR.h  Exception.h Util.h
TESTS = Test.h 
OBJ = $(DEPS:.h=.o) lib/libantlr.so main.cpp
EXE = comp
TEST = test
OBJ_TEST = $(DEPS:.h=.o) $^ $(TESTS:.h=.o) lib/libantlr.so test.cpp


comp: $(OBJ)
	$(CPP) -o $(EXE) $^ $(CFLAGS)

%.o: %.cpp $(DEPS)
	$(CPP) -c -o $@ $< $(CFLAGS)

clean:
	rm -rf *.o comp a.out out.asm test

test: $(OBJ_TEST)
	$(CPP) -o $(TEST) $^ $(CFLAGS)
