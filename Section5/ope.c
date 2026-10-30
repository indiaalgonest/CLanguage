#include <stdio.h>

int main() {
    int a=10, b=3,c=8;
    //Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("Addition: %d\n", a + b); // Addition
    printf("Subtraction: %d\n", a - b); // Subtraction
    printf("Multiplication: %d\n", a * b); // Multiplication
    printf("Division: %d\n", a / b); // Division
    printf("Modulus: %d\n", a % b); // Modulus
    //Relational Operators
    printf("\nRelational Operators:\n");
    printf("Equal to: %d\n", a == b);
    printf("Not equal to: %d\n", a != b);
    printf("Greater than: %d\n", a > b);
    printf("Less than: %d\n", a < b);
    printf("Greater than or equal to: %d\n", a >= b);
    printf("Less than or equal to: %d\n", a <= c);
    //Logical Operators
    printf("\nLogical Operators:\n");
    printf("Logical AND: %d\n", a > b && b < c);
    printf("Logical OR: %d\n", a > b || b > c);
    printf("Logical NOT: %d\n", !(a > b));
    return 0;
}