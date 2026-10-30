/* 
Start with int num = 20.

Use compound operators to:

Add 10
Multiply by 2
Subtract 5
Divide by 5

Print the value after each operation.
*/
#include <stdio.h>

int main() {
    int num = 20;
    printf("Initial value: %d\n", num);
    num += 10;
    printf("After adding 10: %d\n", num);
    num *= 2;
    printf("After multiplying by 2: %d\n", num);
    num -= 5;
    printf("After subtracting 5: %d\n", num);
    num /= 5;
    printf("After dividing by 5: %d\n", num);
    return 0;
}