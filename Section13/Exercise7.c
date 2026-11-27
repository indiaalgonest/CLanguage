/* Exercise 7 (PROBLEM): find the bugs.
   This program is intentionally WRONG. Do not copy it.
   Snippet A has a memory leak. Snippet B has a dangling pointer.
   Compile: gcc -Wall -Wextra exercise7_find_the_bugs.c -o ex7bad */
#include <stdio.h>
#include <stdlib.h>

void snippetA() {
    int *p = (int*) malloc(5 * sizeof(int));
    p[0] = 100;
    printf("A: %d\n", p[0]);
    free(p);
    p=NULL;
}                                   /* BUG: p is never freed */

void snippetB() {
    int *q = (int*) malloc(sizeof(int));
    *q = 50;
    free(q);
    q=NULL;
    // printf("B: %d\n", *q);          /* BUG: use after free */
}

int main() {
    snippetA();
    snippetB();
    return 0;
}