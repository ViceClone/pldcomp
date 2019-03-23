comp:*.cpp
	g++ -std=c++11 -I antlr4-runtime/ -o comp *.cpp -L lib/libantlr.so -lantlr

clean:
	rm -rf *.o comp

antlr4:
	antlr4 -no-listener -visitor -Dlanguage=Cpp PLDComp.g4
