/*
Write a function int maximum(int x, int y) that returns the larger of the two numbers.

Test it with different values.*/
#include <stdio.h>
int maximum(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = maximum(num1, num2);
    printf("The maximum is: %d\n", result);
    return 0;
}