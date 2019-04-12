int main() {
    char str[100] = {'c','a','o',' ','x','u','a','n',' ','h','u','y','\n',0};
    int i=0;
    while (str[i]) {
        putchar(str[i]);
        i = i+1;
    }
    return 0;
}