#include <stdio.h>

int main() {
    int age;
    float height;
    char gender;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your gender(M-male, F-female): ");
    scanf(" %c", &gender);
    printf("\n-------Your Information-------\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Gender: %c\n", gender);
    return 0;
}