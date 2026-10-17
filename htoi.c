#include <stdio.h>
int main() {
  int htoi(char []);
  printf("htoi('ada3b') = %d\n", htoi("ada3b"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}

int htoi(char s[]) {
    int powa(int, int);
    int len(char []);
    // Convert to major case

    int i, x, base, value, distance, j;
    base = 16;
    distance = 10;
    x = 0;


    for (i = 0, j = len(s) - 1; s[i] != '\0'; ++i, --j) {

        if (s[i] - '0' <= 9 ) value = s[i] - '0';
        else if (s[i] >= 'A' && s[i] <= 'F') value = s[i] - ('A' - distance);
        else if (s[i] >= 'a' && s[i] <= 'f') value = s[i] - ('a' - distance);
        else return 0;
        x += value * powa(base, j);
    }
    
    return x;
}

int len(char s[]) {
    int i = 0; 
    while ( s[i] != '\0') {
        i++;
    };

    return i;
}

int powa(int base, int power) {
    int i;
    int n = 1;
    for (i = 0; i < power; ++i) n *= base;
    return n;

}