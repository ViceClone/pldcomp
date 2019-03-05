#include "ReturnInstruction.h"
#include <iostream>
#include <stdio.h>

using namespace std;

ReturnInstruction::ReturnInstruction(int n) {
    n = n;
}

void ReturnInstruction::affiche(int n) {
    cout << "ReturnInstruction " << n << endl;
}

int ReturnInstruction::getValue() {
    return n;
}