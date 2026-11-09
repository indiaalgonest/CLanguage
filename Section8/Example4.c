// print 1 to 5 using do while loop

#include <stdio.h>

int main(){

    printf("Print 1 to 5 using do-while loop:\n");
    int i = 1;
    do {
        printf("%d\t", i);
        i++;
    } while(i <= 5);
    return 0;
}