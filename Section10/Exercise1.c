//Take 6 integers from the user, store them in an array, and print them in the same order and in reverse order.
#include <stdio.h>

int main() {
    int arr[6];
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter 6 integers: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array in the same order: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArray in reverse order: ");
    for (int i = 0; i <size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}