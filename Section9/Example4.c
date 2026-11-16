//Square without touching the number using function in C
#include <stdio.h>  
int square(int num) {  
    num= num * num;  
    return num;
}
int main() {  
    int num = 5;  
    printf("The square of %d is: %d\n", num, square(num));  
    return 0;  
}