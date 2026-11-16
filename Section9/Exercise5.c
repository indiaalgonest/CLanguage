/*Write a function void tryChange(int n) that tries to change the value of n to 100.

Call it from main() and show that the original variable does not change.*/
#include <stdio.h>
void tryChange(int n) {
    n = 100; // Attempt to change the value of n
}

int main() {
    int num = 50;
    printf("Original value: %d\n", num);
    tryChange(num);
    printf("Value after function call: %d\n", num);
    return 0;
}