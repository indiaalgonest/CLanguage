//Take a positive integer from the user and calculate its factorial using a loop.
#include <stdio.h>
int main() {
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i; // Calculate factorial
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}