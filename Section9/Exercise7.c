/*Create a global variable count.

Write a function that increases count by 1.

Call the function 5 times from main() and print the final value of count.*/
#include <stdio.h>
int count = 0; // Global variable

void increaseCount() {
    count++;
}

int main() {
    for (int i = 0; i < 15; i++) {
        increaseCount();
    }
    printf("Final value of count: %d\n", count);
    return 0;
}