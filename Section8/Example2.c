// Print the Even numbers from 1 to 20

#include <stdio.h>

int main(){

    printf("The Even numbers from 1 to 20 are:\n");
    // Loop to print even numbers from 1 to 20 using while loop
    int i = 2;
    while(i <= 20){
        printf("%d\t", i);
        i += 2;
    }
    return 0;
}