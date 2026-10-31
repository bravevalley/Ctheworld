#include "stdio.h"

/* 
LBS290 Exercise 8. This program will prompt for 5 floating point numbers. The program will print out the total of the five numbers and also print out the average. 
*/

int main () {
    
    int c, afterdot, x;
    afterdot = 0, x = 1;
    float vount = 0, value = 0, digit = 0;
    while ((c = getchar()) != EOF) {
        
        if (c == '\n') {
            vount++;
            afterdot = 0, x = 1;
            value += digit;
            digit = 0;
        } else if (c == '.') {
            afterdot = 1;
            continue;
        }


        if (afterdot == 1) {
            x *= 10;
            digit += (float) (c - '0') / x ;
        } else if (c >= '0' && c <= '9' && afterdot != 1) {
            digit = 10.0 * digit + (c - '0');
        }
    }
    printf("The total is: %.1f\n", value);
    printf("The average is: %.1f\n", value/vount);
}