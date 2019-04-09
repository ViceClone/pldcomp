int func(int a, int b){
    return a+b;
}
int output(char c) {
    putchar(c);
    putchar('\n');
}
int main() {
    int a = 1;
    if (a) {
        int b = 0;
        output('1');
        if (b) {
            output('1');
        } else {
            output('0');
        }
    } else {
        output('0');
    }
    return 3;
}
