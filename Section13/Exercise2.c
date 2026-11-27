/* Exercise 2: Using calloc()
   Compile: gcc -Wall -Wextra exercise2_calloc.c -o ex2 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int *arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Initial values:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 5;
    }

    printf("\nUpdated values:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;
    return 0;
}
