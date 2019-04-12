int factorial(int n) {
    if (n>1) {
        return n*factorial(n-1);
    } else {
        return 1;
    }
}
int main() {
    int x = factorial(5);
    return x;
}