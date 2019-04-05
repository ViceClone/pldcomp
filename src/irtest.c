int sum(int a, int b, int c) {
    return a+b+c;
}

int main() {
    int a = 1;
    int b = 2; 
    int c =3;
    int d = sum(a,sum(4,5,6),c);
    return d;
}
