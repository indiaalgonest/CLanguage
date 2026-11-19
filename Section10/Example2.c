//Reading and traversing an array
#include <stdio.h>

int main() {
    int marks[5] = {72, 82, 94, 86, 78};
    int arr1[5]={0};
    int arr2[]={1,2,3,4,5};
    //Accessing and printing the elements of the array
    printf("Access one at a time:\n");
    printf("marks[0]: %d\n", marks[0]);
    printf("marks[3]: %d\n", marks[3]);
    //Traversing the array using a loop
    printf("Traversing the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("marks[%d]: %d\n", i, marks[i]);
    }
    printf("Display arr1 elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter value for arr1[%d]: ", i+1);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("arr1[%d]: %d\n", i, arr1[i]);
    }
    int size = sizeof(arr2) / sizeof(arr2[0]);
    printf("Size of arr2: %d\n", size);
    for (int i = 0; i < size; i++) {
        printf("arr2[%d]: %d\n", i, arr2[i]);
    }
    return 0;
}