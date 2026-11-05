// Sum of numbers from 1 to 100

#include <stdio.h>

int main(){

    printf("The sum of numbers from 1 to 100 is: ");
     // Loop to print sum of numbers from 1 to 100 using while loop
    int i = 1;
    int sum = 0;
    while(i <= 100){
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}