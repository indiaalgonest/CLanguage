//Take a 3×3 matrix from the user and print it in matrix form. Also calculate the sum of each row.
#include <stdio.h>
int main() {
    int matrix[3][3];
    int rowSum[3] = {0, 0, 0};

    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}