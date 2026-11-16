/*Write a function void checkEvenOdd(int num) that prints whether the given number is Even or Odd.

Take input from the user and call the function.*/
#include <stdio.h>
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}