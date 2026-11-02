/*
Write a program that asks the user for their name initial (character), age (integer), and height (float), then prints the details in a clean format
*/
#include <stdio.h>

int main()
{
    char initial;
    int age;
    float height;

    printf("Enter your name initial: ");
    scanf(" %c", &initial);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);
    printf("\n-----Your Details-----\n");
    printf("Initial : %c\n", initial);
    printf("Age     : %d\n", age);
    printf("Height  : %.2f\n", height);

    return 0;
}