//Day of the week
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The two numbers are: %d and %d\n", a, b);
    int max = (a > b) ? a : b;
    printf("The maximum number is: %d\n", max);

    return 0;
}