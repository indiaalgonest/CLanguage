// Run while and do while loop with i=10 and compare the output of both loops

#include <stdio.h>

int main(){

    printf("Run while and do while loop with i=10 and compare the output of both loops:\n");
    int i = 10;
    printf("Output of while loop:\n");
    while(i < 10){
        printf("%d\t", i);
        i++;
    }
    printf("\nOutput of do-while loop:\n");
    i = 10;
    do {
        printf("%d\t", i);
        i++;
    } while(i < 10);
    printf("%d\n", i);
    return 0;
}