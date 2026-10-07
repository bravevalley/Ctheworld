#include <stdio.h>

/* Write a program which prints the words in its input, one per line. A word is any string separated by a space or newline. */

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') c = '\n';
        putchar(c);
        printf("%d", c);
    }
}
