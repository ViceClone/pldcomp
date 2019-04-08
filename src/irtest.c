int func(int a, int b){
    return a+b;
}
int output(char c) {
    putchar(c);
    putchar('\n');
}
int main() {
    int a = 0;
    while( a< 4) {
        output('a');
        int b = 0;
        if (1) {
            while (b!=3) {
                output('b');
                b=b+1;
            }
        } else {
            return 5;
        }
        a = a+1;
    }
    return 3;
}
