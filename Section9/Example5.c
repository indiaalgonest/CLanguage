// Using local variables in C
#include <stdio.h>
void show()
{
    int num = 10; // Local variable
    // printf("The value of num is: %d\n", num);
}

int main() {
    show();
    printf("The value of num is: %d\n", num);
    return 0;
}