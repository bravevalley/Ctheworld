#include <stdio.h>

int main() {
    const int MAX_INPUT = 5; 
    int i;
    float total = 0;
    float current;

    
    for(i = 0; i < MAX_INPUT; i++) {
        scanf("%f", &current);
        total += current;
        current = 0;
    }

    printf("The total is: %.1f\n", total);
    printf("The average is: %.1f\n", total/MAX_INPUT);
}