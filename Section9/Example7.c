//Global variable in C
#include <stdio.h>

int globalVar = 100; // Global variable

void show() {
    globalVar += 50; // Modifying the global variable
    printf("The value of globalVar is: %d\n", globalVar);
}

int main() {
    show();
    globalVar += 25; // Modifying the global variable in main
    printf("The value of globalVar in main is: %d\n", globalVar);
    return 0;
}