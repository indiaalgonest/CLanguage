// Use Break and continue statement in C programming language
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking the loop at i = %d\n", i);
            break; // Exit the loop when i is 5
        }
        if (i % 2 == 0) {
            printf("Skipping even number: %d\n", i);
            continue; // Skip even numbers
        }
        printf("Current value of i: %d\n", i);
    }
    return 0;
}