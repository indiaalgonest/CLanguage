//Take 10 numbers from the user and count how many of them are even and how many are odd.
#include <stdio.h>
int main() {
    int arr[10];
    int evenCount = 0, oddCount = 0;

    printf("You have to enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter integer No. %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("You have entered the following integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\nNumber of even integers: %d\n", evenCount);
    printf("Number of odd integers: %d\n", oddCount);

    return 0;
}