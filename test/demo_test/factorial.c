#include <stdint.h>

int32_t factorial(int n)
{
    if (n >= 1) {
        return n*factorial(n-1);
    }
    else {
        return 1;
    }
}