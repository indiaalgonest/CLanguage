/*
Write a function int add(int a, int b) that returns the sum of two numbers.

Take two numbers from the user in main(), call the function, and print the result.*/
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = add(num1, num2);
    printf("The sum is: %d\n", result);
    return 0;
}