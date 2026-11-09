// Print odd numbers from 1 to 20 using for loop
#include <stdio.h>

int main(){

    printf("Odd numbers from 1 to 20 are:\n");
    for(int i = 1; i <= 20; i += 2){
        printf("%d\t", i);
    }
    printf("\n");
    return 0;
}