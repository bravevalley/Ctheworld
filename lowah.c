#include <stdio.h>
int main()
{
    int atoi(char[]);
    int lowah(char[]);
    int lower(int);
    char b[1000] = "SMALLZ";
    lowah(b);
    int new = lower('G');

    printf("New Value is %c\n", new);

}

int atoi(s) /* convert s to integer */
char s[];
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + s[i] - '0';
    return(n);
}

int lowah(s)
char s[]; 
{
    int i;
    for (i = 0; s[i] >= 'A' && s[i] <= 'Z'; ++i ) 
        s[i] = s[i] + 32;
    return(0);
}

int lower(c) /* convert c to lower case; ASCII only */
int c;
{
  if (c >= 'A' && c <= 'Z')
    return(c + 'a' - 'A');
    //     71 + 97 - 65 
  else
    return(c);
}