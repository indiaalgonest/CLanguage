/*Create a variable num = 50.

Using a pointer, change its value to 100 and print it.*/
#include <stdio.h>
int main() {
    int num = 50;
    int *ptr = &num;

    // Change the value of num using the pointer
    *ptr = 100;

    // Print the updated value of num
    printf("Updated value of num: %d\n", num);

    return 0;
}