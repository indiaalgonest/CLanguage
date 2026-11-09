//Find first number divisible by 7 from 1 to 100
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            printf("First number divisible by 7 from 1 to 100 is: %d\n", i);
            break;
        }
    }
    return 0;
}