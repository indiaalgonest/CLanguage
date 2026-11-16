//Block scope of variables in C
#include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        int num = i * 2; // 'num' is only accessible within this block
        printf("Inside loop: num = %d\n", num);
    }
    // printf("Outside loop: num = %d\n", num); // This will cause an error because 'num' is out of scope   
    printf("Outside loop: num is not accessible here.\n");
    printf("%d\n", i); // This will cause an error because 'i' is out of scope

    return 0;
}