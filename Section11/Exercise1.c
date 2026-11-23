/*Declare an integer variable and a pointer to it.

Print the value of the variable, its address, the value of the pointer, and the value obtained by dereferencing the pointer.*/
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)(&num));
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value obtained by dereferencing ptr: %d\n", *ptr);

    return 0;
}