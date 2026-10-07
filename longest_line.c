#include <stdio.h>

#define MAX 1000

int get_line();

int main() {

    

}


get_line() {

    int c, i;
    char line[MAX];

    while((c = getchar()) != EOF ) {
        for ( i = 0; i < MAX; ++i) {
            if (c == '\n') break;
            line[i] = c;
        }
    }

    return line;
}
