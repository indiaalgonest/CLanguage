/*
Print the following pattern using nested loops:
*
* *
* * *
* * * *
* * * * *
*/
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) { // Loop for each row
        for (j = 1; j <= i; j++) { // Loop for each column in the current row
            printf("* "); // Print asterisk followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}