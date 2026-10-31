#include <stdio.h>

int main() {

    int itoa(int, char[]);

    int digit = -123;
    char s[1000];
    

    itoa(digit, s);
    printf("Final is %s\n", s);
}

int itoa(int n, char s[]) {
    int i, replacement, sign;
    i = 0;
    sign = 1;
    replacement = n;
    if (n < 0){
        s[i++] = '-';
        sign = -1;
    } 
    
    while (replacement != 0) {
        s[i++] = sign * (replacement % 10) + '0';
        replacement /= 10;
     }
    
}