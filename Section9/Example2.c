//To understand the Types of functions in C on the basis of return type and parameters
// Function with no return type and no parameters
#include <stdio.h>

void printMessage() {
    printf("Hello, I am learning function in C!\n");
}
// Function with return type and parameters
int add(int a, int b) {
    return a + b;
}
// Function with return type and no parameters
int getRandomNumber() {
    return 42; // Just returning a fixed number for demonstration
}
// Function with no return type and parameters
void printSum(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
}

float average(int a, int b){
    return (a + b) / 2.0;
}

int main() {
    printMessage();
    int result = add(5, 10);
    printf("The sum is: %d\n", result);
    printSum(25, 10);
    int randomNum = getRandomNumber();
    printf("The random number is: %d\n", randomNum);
    // float avg = average(25, 30);
    printf("The average is: %.1f\n", average(15, 30));

    return 0;
}


