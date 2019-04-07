int func(int a, int b){
    return a+b;
}
int main() {
    int a = 3;
    //return a;
    if (func(1,-1)) {
        a = a+3;
    } else {
        //return 3;
        a=   5;
    }
    a = a+5;
    return a;
    //a = 4;
}
