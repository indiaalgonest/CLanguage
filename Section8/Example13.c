//Print Number of stars in a row and column
#include <stdio.h>

int main(){

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}