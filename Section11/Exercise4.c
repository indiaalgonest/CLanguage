/*Create an array of 6 integers.

Traverse and print all elements using pointer arithmetic (without using arr[i]).*/
#include <stdio.h>
int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(ptr + i)); // Accessing elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}