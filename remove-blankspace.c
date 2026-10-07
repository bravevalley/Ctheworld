#include <stdio.h>

/*  Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

/* But soft  what light     through yonder window breaks
It is    the east and  Juliet is the sun
Arise fair sun   and kill the envious moon
Who  is  already  sick  and  pale  with  grief 

should return 

But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief
*/
#define YES 1
#define NO 0

main() {
    int c;
  	int present, past;
  
    while ((c = getchar()) != EOF) {
      	if (c == ' ') {
         	present = YES;
           	if (past == YES) {
          		c = '\0';
            }
          	past = YES;
        } else past = NO;
      
        putchar(c);
    } 
}