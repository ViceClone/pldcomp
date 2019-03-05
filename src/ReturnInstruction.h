#include <stdio.h>

using namespace std;

class ReturnInstruction {
    public:
        ReturnInstruction(int n);
        void affiche(int n);
        int getValue();
    private:
        int n;
};