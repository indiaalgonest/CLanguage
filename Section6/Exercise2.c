/*
ake two integers from the user and print their sum, difference, product, and remainder.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum         : %d\n", num1 + num2);
    printf("Difference  : %d\n", num1 - num2);
    printf("Product     : %d\n", num1 * num2);
    printf("Remainder   : %d\n", num1 % num2);
    return 0;
}