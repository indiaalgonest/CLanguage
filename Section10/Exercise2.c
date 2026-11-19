//Write a program to find the maximum, minimum, and sum of all elements in an array of size 8.
#include <stdio.h>

int main() {
    int arr[8]={14, 23, -5, 67, -12, 134, 89, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int max=arr[0], min=arr[0];

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Sum of all elements: %d\n", sum);

    return 0;
}