#include <stdio.h>

/* exponentiation introduces an exponential function in C since it is not available natively with ** unlike other languages */
int power(int m, int n);

int main(void) {
    printf("2 ^ 5 = %d\n", power(2, 5));
    return 0;
}

int power(int m, int n) {
    int i;
    int base = 1;

    if (n < 0) {
        return -1;
    }

    for (i = 0; i < n; i++) {
        base *= m;
    }

    return base;
}