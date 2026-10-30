#include <stdio.h>

int main() {
    int num = 10;
    // Compound Assignment Operators
    printf("Compound Assignment Operators:\n");
    printf("Initial value: %d\n", num);
    num += 5; // Addition assignment
    printf("After += 5: %d\n", num);
    num -= 3; // Subtraction assignment
    printf("After -= 3: %d\n", num);
    num *= 2; // Multiplication assignment
    printf("After *= 2: %d\n", num);
    num /= 4; // Division assignment
    printf("After /= 4: %d\n", num);
    num %= 3; // Modulus assignment
    printf("After %%= 3: %d\n", num);
    return 0;
}