/*
Take a float value (price) from the user and print it in the following formats:

1.Normal
2.With 2 decimal places
3.With total width of 10 and 2 decimal places
*/
#include <stdio.h>

int main()
{
    float price;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("1. Normal: %f\n", price);
    printf("2. With 2 decimal places: %.2f\n", price);
    printf("3. With total width of 10 and 2 decimal places: %10.2f\n", price);

    return 0;
}