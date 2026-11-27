/* Exercise 5: Safe memory management
   Allocate -> use -> free -> set to NULL
   Compile: gcc -Wall -Wextra exercise5_safe_memory.c -o ex5 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(3 * sizeof(int));     /* 1. allocate */
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    ptr[0] = 11; ptr[1] = 22; ptr[2] = 33;         /* 2. use */
    printf("Values: %d %d %d\n", ptr[0], ptr[1], ptr[2]);

    free(ptr);                                     /* 3. free */
    ptr = NULL;                                    /* 4. set to NULL */

    /* DANGEROUS if ptr had not been set to NULL:
       printf("%d\n", ptr[0]);   // use after free
       With ptr == NULL this would crash immediately,
       which is easier to find than a silent wrong value. */

    if (ptr == NULL) {
        printf("ptr is NULL, memory released safely\n");
    }
    return 0;
}

