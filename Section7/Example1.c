//Between 10 and 50
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 50) {
        printf("You entered  %d between 10 and 50.\n", num);
    } else {
        printf("Number is out of range.\n");
    }

    return 0;
}