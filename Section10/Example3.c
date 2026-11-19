/* Prints every element of an array */
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
}
//Double the elements of an array
void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
//tries to change normal variable and array variable
void change(int n,int arr[]) {
    n = 100; // This change will not affect the original variable in main
    arr[0] = 1000; // This change will affect the original array in main
}
//Show sizeof inside a function
void showSize(int arr[], int size) {
    printf("Size of array inside function: %zu bytes\n", sizeof(arr));
    printf("Size of array elements inside function: %zu bytes\n", sizeof(arr[0]));
}

int main() {
    int marks[5] = {72, 82, 94, 86, 78};
    int num[5] = {1, 2, 3, 4, 5};
    int n = 10;
    //Print the elements of the marks array using the printArray function
    printf("Printing marks array:\n");
    // printArray(marks, 5);
    //Double the elements of the num array using the doubleArray function
    doubleArray(num, 5);
    //Print the elements of the num array using the printArray function
    // printf("Printing num array after doubling:\n");
    // printArray(num, 5);
    //Call the change function to modify n and marks array
    change(n, num);
    //Print the value of n and the elements of the num array after calling change
    // printf("Value of n after calling change: %d\n", n);
    // printf("Printing num array after calling change:\n");
    // printArray(num, 5);
    //Show sizeof inside a function
    showSize(num, 5);
    printf("Size of array in main: %zu bytes\n", sizeof(num));

    return 0;
}