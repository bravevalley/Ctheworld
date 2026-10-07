#include <stdio.h>


int main() {

    int c, ndigit, nwhite, nother;

    ndigit = nwhite = nother = 0;

    while((c = getchar()) != EOF) {
        if ( c >= '0' && c <= '9' ) {
            ++ndigit;
        } else if ( c == ' ' || c == '\t' || c == '\n') {
            ++nwhite;
        } else ++nother;
    }

    printf("Digit Count: %d\tWhiteSpace Count: %d\tOther Count: %d\n", ndigit, nwhite, nother);
}