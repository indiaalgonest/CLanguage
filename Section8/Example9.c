//Print numbers from 10 to 1 using for loop
#include <stdio.h>

int main(){

    printf("Numbers from 10 to 1 are:\n");
    for(int i = 10; i >= 1; i--){
        printf("%d\t", i);
    }
    printf("\n");
    return 0;
}