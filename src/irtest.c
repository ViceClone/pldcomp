int sum(int a, int b, int c) {
    return a+b*c;
}

int sub(int a,int b) {
    int c1 = a-b;
    return c1;
}

int main() {
    int a = 1;
    int b = 2; 
    int c =3;
    int d = sum(a,sum(a*4,1,1),b);
    return d;
}
