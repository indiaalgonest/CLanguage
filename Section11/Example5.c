/*
 * Section 11 - Lecture 6: Pointers to Pointers
 * 
 * Compile: gcc lecture6_pointer_to_pointer_demo.c -o demo
 * Run:     ./demo
 */
#include <stdio.h>

/* 6. A function that changes where the caller's pointer points */
void moveTo(int **pp, int *target)
{
    *pp = target;
}

int main(void)
{
    /* ---------------------------------------------------------
     * 1. Set up: variable, pointer, pointer to pointer
     * --------------------------------------------------------- */
    int num = 50;
    int *ptr = &num;        /* Pointer to num */
    int **ptr2 = &ptr;      /* Pointer to ptr */

    /* ---------------------------------------------------------
     * 2. Values: num, *ptr and **ptr2 all reach 50
     * --------------------------------------------------------- */
    printf("=== 2. Values ===\n");
    printf("Value of num          : %d\n", num);
    printf("Value using *ptr      : %d\n", *ptr);
    printf("Value using **ptr2    : %d\n\n", **ptr2);

    /* ---------------------------------------------------------
     * 3. Addresses
     * --------------------------------------------------------- */
    printf("=== 3. Addresses ===\n");
    printf("Address of num        : %p\n", (void *)&num);
    printf("Address stored in ptr : %p\n", (void *)ptr);
    printf("Address of ptr        : %p\n", (void *)&ptr);
    printf("Address stored in ptr2: %p\n\n", (void *)ptr2);

    /* ---------------------------------------------------------
     * 4. The five expressions side by side
     * --------------------------------------------------------- */
    printf("=== 4. Five expressions ===\n");
    printf("ptr     = %p   (address of num)\n", (void *)ptr);
    printf("*ptr    = %d                (value of num)\n", *ptr);
    printf("ptr2    = %p   (address of ptr)\n", (void *)ptr2);
    printf("*ptr2   = %p   (value of ptr = address of num)\n", (void *)*ptr2);
    printf("**ptr2  = %d                (value of num)\n", **ptr2);
    printf("*ptr2 == ptr ? %d\n\n", *ptr2 == ptr);

    /* ---------------------------------------------------------
     * 5. Modify the original variable through **ptr2
     * --------------------------------------------------------- */
    printf("=== 5. Modify with **ptr2 ===\n");
    **ptr2 = 100;
    printf("New value of num: %d\n", num);
    printf("Value using *ptr: %d\n\n", *ptr);

    /* ---------------------------------------------------------
     * 6. Move a pointer using a pointer to pointer
     * --------------------------------------------------------- */
    printf("=== 6. moveTo(&p, &b) ===\n");
    int a = 10, b = 20;
    int *p = &a;
    printf("Before: *p = %d\n", *p);
    moveTo(&p, &b);
    printf("After : *p = %d   (p now points to b)\n", *p);

    return 0;
}