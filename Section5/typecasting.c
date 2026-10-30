#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    float result;
    // Without Casting
    result = a / b; // Integer division
    printf("Without Casting: %.2f\n", result);
    //With Explicit Casting
    result = (float)a / b; // Floating-point division
    printf("\nWith Explicit Casting: %.2f\n", result);
    // float to int casting
    float price = 99.99;
    int roundedPrice = (int)price; // Explicit casting from float to int
    printf("\nRounded Price: %d\n", roundedPrice);

    return 0;
}