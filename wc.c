#include <stdio.h>

/* My minimal implementation of bash util wc, a command line utility
that counts the number of character, lines and words of a given 
input string or stream.*/

int main() {

    int c, nc, nl, nw, previous, cur;
    nc = nl = nw = cur = previous = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;

        if (c == ' ' || c == '\t' || c == '\n' ) {
            
            cur = 1;

            if (nc != 1 ) {
                if (previous != cur) ++nw;
            }
            previous = 1;
        } else {
            previous = cur = 0;
        }
        
    }

    printf("C: %d\tW: %d\tL: %d \n", nc, nw, nl);
}