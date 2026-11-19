//2D Arrays
#include <stdio.h>

int main(){
    // Declare a 2D array with 3 rows and 3 columns
    int matrix[3][3];
    int sum = 0;
    //input values into the 2D array
    printf("Enter 9 integers for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    // Print the 2D array
    printf("The 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    // Print the sum of all elements in the 2D array
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
}