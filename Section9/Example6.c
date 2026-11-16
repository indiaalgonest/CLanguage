//Same variable name in different functions in C
#include <stdio.h>
void function1() {
    int num = 10; // Local variable in function1
    printf("Inside function1: num = %d\n", num);
}

void function2() {
    int num = 20; // Local variable in function2
    printf("Inside function2: num = %d\n", num);
}

int main() {
    function1();
    function2();
    return 0;
}