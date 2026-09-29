#include <stdio.h>


int main() {

    char input[1000];
    int i, x;
    int len = 0;

    printf("Type the input\n");
    
    scanf("%s", input);

    for (i = 0; i < 1000; i++) {
        if (input[i] == '\0') break;
        len++;      
    }

    if (len > 0) {
        printf("String length = %d\nReversing...\n", len);

        char val[len];

        for (x = 0; x < len; x++) {
            val[x] = input[(len - 1) - x];
        };
    
        printf("%s", val);
    } 
}
