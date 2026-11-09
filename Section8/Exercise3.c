//Print all even numbers from 1 to 50 using a loop and the continue statement.
#include <stdio.h>
int main() {
    int i;
    printf("Even numbers from 1 to 50:\n");
    for (i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            continue; // Skip odd numbers
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}