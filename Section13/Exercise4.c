
/* Exercise 4: Resize an array using realloc()
   Compile: gcc -Wall -Wextra exercise4_realloc.c -o ex4 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*) malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    int *temp = (int*) realloc(arr, 8 * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(arr);           /* the original is still valid */
        return 1;
    }
    arr = temp;

    for (int i = 5; i < 8; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Final array:");
    for (int i = 0; i < 8; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;
    return 0;
}
