//5 Common array problems in C
#include <stdio.h>
 int main() {
    
    int arr1[] = {3, 5, 7, 2, 8,12};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    printf("Printing elements of arr1:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    //maximum and minimum of an array
    int max = arr1[0];  
    int min = arr1[0];
    for (int i = 1; i < size; i++) {
        if (arr1[i] > max) {
            max = arr1[i];
        }
        if (arr1[i] < min) {
            min = arr1[i];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    //sum and average of an array
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr1[i];
    }
    float average = (float)sum / size;
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);
    //reverse an array
    printf("Reversing the array:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    //searching an element in an array learning linear search
    int target ;
    printf("Enter an integer to search in the array: ");
    scanf("%d", &target);
    int found = 0; // Flag to indicate if the target is found
    for (int i = 0; i < size; i++) {
        if (arr1[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            found = 1;
            break; // Exit the loop once the element is found
        }
        
    }
    if (!found) {
        printf("Element %d not found in the array\n", target);
    }
    //count even and odd numbers in an array
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr1[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
    return 0;
}