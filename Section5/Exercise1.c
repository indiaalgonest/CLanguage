/*
Declare variables to store:
Your age (integer)
Your height in feet (float)
Your first initial (character)

Print them in this format:
Age: 22
Height: 5.8
Initial: R
*/

#include <stdio.h>

int main() {
    int age = 22;
    float height = 5.8;
    char initial = 'P';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Initial: %c\n", initial);

    return 0;
}
