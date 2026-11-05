//nestedif or logical operator
#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    // if(marks >=40)
    // {
    //     if(marks<=100)
    //     {
    //         printf("Valide Passing Mrks\n");
    //     }
    // }
    if(marks >=40 && marks<=100)
    {
        printf("Valide Passing Marks\n");
    }
    return 0;
}