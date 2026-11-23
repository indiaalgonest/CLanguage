/*Create an integer variable, a pointer to it, and a pointer to that pointer.

Print the value of the variable using all three (variable, single pointer, and double pointer).*/
#include <stdio.h>
int main() {
    int num = 12; // Integer variable
    int *ptr = &num; // Pointer to the integer variable
    int **dptr = &ptr; // Pointer to the pointer

    // Print the value of the variable using all three methods
    printf("Value of num (using variable): %d\n", num);
    printf("Value of num (using single pointer): %d\n", *ptr);
    printf("Value of num (using double pointer): %d\n", **dptr);

    return 0;
}