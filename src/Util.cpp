#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h> 
#include <stdlib.h>

#include "Util.h"

using namespace std;

void Util::read_file(string file_name) {
    ifstream myReadFile;
    myReadFile.open(file_name);
    string output;
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            getline(myReadFile, output);
            cerr << output << endl;
        }
        cerr << endl;
    }
    myReadFile.close();
}

void Util::log_file(std::ofstream& testLogStream, string file_name) {
    ifstream myReadFile;
    myReadFile.open(file_name);
    string output;
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            getline(myReadFile, output);
            testLogStream << output << endl;
        }
        testLogStream << endl;
    }
    myReadFile.close();
}