//Take a number from the user and print its multiplication table from 1 to 10.
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number who's table to display: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}