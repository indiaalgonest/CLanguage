// Print the first 10 natural numbers

#include <stdio.h>

int main(){

    printf("The first 10 natural numbers are:\n");
     // Loop to print numbers from 1 to 10 using while loop
    int i = 1;
    while(i <= 10){
        printf("%d\t", i);
        i++;
    }
    return 0;
}