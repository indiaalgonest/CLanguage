//Write a function that reverses an array. Call the function from main() and display the array before and after reversing.
#include <stdio.h>
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main() {
    int arr[8] = {14, 23, -5, 67, -12, 134, 89, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before reversing: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Array after reversing: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}