/*
Write a program that takes:

1.Student name initial (char)
2.Marks in 3 subjects (float)
3.Calculate and print the average marks with 2 decimal places.

Add proper comments in your code.
*/
#include <stdio.h>

int main()
{
    char initial;
    float marks1, marks2, marks3, average; // Declare variables for student initial and marks and to calculate average

    printf("Enter student name initial: ");
    scanf(" %c", &initial);

    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    // Calculate average marks
    average = (marks1 + marks2 + marks3) / 3.0;

    printf("Initial          : %c\n", initial);
    // Print average marks with 2 decimal places
    printf("Average marks    : %.2f\n", average);

    return 0;
}