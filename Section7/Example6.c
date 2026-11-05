//Day of the week
#include <stdio.h>

int main() {
    int num;
    printf("Enter a any number : ");
    scanf("%d", &num);
    printf("The number is: %d\n", num);
    (num % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");
    return 0;
}