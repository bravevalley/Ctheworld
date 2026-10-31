#include <stdio.h>

/* 
You should write a function (no #include statements are needed) called lower(c) that converts its input parameter to lower case. If the letter is not an upper case ASCII letter - just return the parameter unchanged. You should not use ctype.h and your code can assume the ASCII character set. You should use the question mark (?) operator and not an if-then-else construct. 
*/
int main() {
  int lower(int);
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower m is %c\n", lower('m'));
}


int lower(   c) {
    int value = c >= 'A' && c <= 'Z' ? c + 32 : c;
    return value;
}