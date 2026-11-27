/* Exercise 6: Dynamic sum and average
   Compile: gcc -Wall -Wextra exercise6_sum_average.c -o ex6 */
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float) sum / n);

    free(arr);
    arr = NULL;
    return 0;
}

