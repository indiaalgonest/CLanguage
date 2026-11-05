//Take an integer and check whether it is Positive, Negative, or Zero using the ternary operator.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    (num > 0) ? printf("The number is Positive.\n") : (num < 0) ? printf("The number is Negative.\n") : printf("The number is Zero.\n");

    return 0;
}