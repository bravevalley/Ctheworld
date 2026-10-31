#include <stdio.h>


int main() {
    char t[1000];
    void expand(char[], char[]);

    expand("Hello world", t);
    printf("%s\n", t);

    expand("Hello world\n", t);
    printf("%s\n", t);

    expand("Hello\tworld\n", t);
    printf("%s\n", t);

    expand("Hello\tworld\nHave a nice\tday\n", t);
    printf("%s\n", t);
}


void expand(s, t)
    char s[], t[];
{
    int i, j;
    for(i=0,j=0; s[i] != '\0'; i++, j++) {
        switch (s[i]) {
            case '\n': 
                t[j++] = '\\';
                t[j] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j] = 't';
                break;
            default:
                t[j] = s[i];
        }
    }
    t[j] = '\0';
}