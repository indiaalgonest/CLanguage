/*
Take two integers from the user, divide the first by the second, and print the result as a float with 2 decimal places.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result : %.2f\n", (float)num1 / num2);
    return 0;
}