//Declaring,Defining and calling the funtion in C
#include <stdio.h>

int main() {
    // Function declaration
    void printMessage();
    int add(int a, int b);

    // Function call
    printMessage();
    int result = add(5, 10);
    printf("The sum is: %d\n", result);

    return 0;
}

// Function definition
void printMessage() {
    printf("Hello, I am learning function in C!\n");
}

int add(int a, int b) {
    return a + b;
}