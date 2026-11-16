/*Write a function int factorial(int n) that returns the factorial of a number.

Take a number from the user and display its factorial.*/
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("The factorial of %d is: %d\n", num, result);
    return 0;
}