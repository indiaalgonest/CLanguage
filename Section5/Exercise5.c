/* Print the result (1 or 0) of the following expressions (use a = 10, b = 5, c = 8):

a > b
a == c
(a > b) && (b < c)
(a < b) || (c > b)
!(a == b)
*/
#include <stdio.h>

int main() {
    int a=10 , b=5, c=8;
    printf("a > b: %d\n", a > b);
    printf("a == c: %d\n", a == c);
    printf("(a > b) && (b < c): %d\n", (a > b) && (b < c));
    printf("(a < b) || (c > b): %d\n", (a < b) || (c > b));
    printf("!(a == b): %d\n", !(a == b));
    return 0;
}