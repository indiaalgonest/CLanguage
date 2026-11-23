//Write a function that takes an array and its size as parameters and returns the maximum element using pointers.
#include <stdio.h>
int findMax(int *arr, int size) {
    int max = *arr; // Initialize max with the first element
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) { // Compare using pointer arithmetic
            max = *(arr + i);
        }
        // printf("Current max: %d\n", max); // Print the current maximum after each comparison
    }
    return max;
}
int main() {
    int arr[] = {10, 20, 5, 30, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, size);
    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}