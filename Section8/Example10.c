//Calculate and print sum of numbers from 1 to 1000 using for loop
#include <stdio.h>

int main(){

    int sum = 0;
    printf("Program to calculate sum of numbers from 1 to 1000\n");
    for(int i = 1; i <= 1000; i++){
        sum += i;
    }
    printf("The sum of numbers from 1 to 1000 is: %d\n", sum);
    printf("\n");
    return 0;
}