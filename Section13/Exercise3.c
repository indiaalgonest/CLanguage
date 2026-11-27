/* Exercise 3: Find the maximum in a dynamic array
   Compile: gcc -Wall -Wextra exercise3_find_max.c -o ex3 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            // printf("max in loop = %d",max);
        }
    }
    printf("Maximum = %d\n", max);

    free(arr);
    arr = NULL;
    return 0;
}
