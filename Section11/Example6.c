/*
 * Section 11 - Lecture 7: Common Pointer Mistakes & How to Avoid Them
 *
 * By default this program runs only the CORRECT versions.
 * Each mistake is behind a macro so you can switch it on live:
 *
 *   gcc -Wall -Wextra lecture7_pointer_mistakes_demo.c -o demo && ./demo
 *
 *   -DSHOW_CRASH      1. dereference a NULL pointer  (RUN it: crashes)
 *   -DSHOW_WRONG_OPS  2. wrong use of & and *        (COMPILE only: read the warnings)
 *   -DSHOW_DANGLING   3. dangling pointer            (COMPILE only: read the warning)
 *   -DSHOW_OOB        4. out-of-bounds access        (COMPILE only, add -O2: read the warning)
 *
 * Example:  gcc -Wall -Wextra -DSHOW_CRASH lecture7_pointer_mistakes_demo.c -o demo
 *
 * Do NOT run builds 2, 3 and 4: they have undefined behavior.
 * Newer gcc versions may report the warnings of build 2 as errors.
 */
#include <stdio.h>

int main(void)
{
    /* ---------------------------------------------------------
     * 1. NULL pointer: check before dereferencing
     * --------------------------------------------------------- */
    printf("=== 1. NULL pointer ===\n");
    int *ptr = NULL;                        /* Always initialize pointers */
    if (ptr == NULL) {
        printf("ptr is NULL, so we do not dereference it\n");
    }
#ifdef SHOW_CRASH
    printf("about to dereference NULL...\n");
    fflush(stdout);
    *ptr = 50;                              /* WRONG: crashes (segmentation fault) */
    printf("not reached\n");
#endif
    int num = 50;
    ptr = &num;                             /* Now it points to valid memory */
    printf("*ptr = %d\n\n", *ptr);

    /* ---------------------------------------------------------
     * 2. & and * used correctly
     * --------------------------------------------------------- */
    printf("=== 2. & and * ===\n");
    int value = 10;
    int *p = &value;                        /* & gives the address */
    *p = 20;                                /* * accesses the value */
    printf("value = %d\n\n", value);
#ifdef SHOW_WRONG_OPS
    {
        int n = 10;
        int *q;
        q = n;                              /* WRONG: missing & */
        *p = &n;                            /* WRONG: address stored in an int */
        (void)q;
    }
#endif

    /* ---------------------------------------------------------
     * 3. Dangling pointer: set to NULL when the variable is gone
     * --------------------------------------------------------- */
    printf("=== 3. Dangling pointer ===\n");
    int *d = NULL;
    {
        int local = 25;
        d = &local;
        printf("%d\n", *d);
        d = NULL;                           /* local is about to be destroyed */
    }
    if (d == NULL) {
        printf("d is NULL, safe to check\n\n");
    }
#ifdef SHOW_DANGLING
    {
        int *bad;
        {
            int gone = 25;
            bad = &gone;
        }                                   /* gone is destroyed here */
        printf("%d", *bad);                 /* WRONG: dangling pointer */
    }
#endif

    /* ---------------------------------------------------------
     * 4. Out of bounds: stay within the array
     * --------------------------------------------------------- */
    printf("=== 4. Out of bounds ===\n");
    int arr[5] = {10, 20, 30, 40, 50};
    int *a = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n\n");
#ifdef SHOW_OOB
    printf("%d", *(a + 8));                 /* WRONG: out of bounds */
#endif

    /* ---------------------------------------------------------
     * 5. (*p)++ versus p++
     * --------------------------------------------------------- */
    printf("=== 5. (*p)++ versus p++ ===\n");
    int b[3] = {10, 20, 30};
    int *r = b;
    (*r)++;                                 /* changes the value */
    printf("b[0] = %d, *r = %d\n", b[0], *r);
    r++;                                    /* moves the pointer */
    printf("b[0] = %d, *r = %d\n", b[0], *r);

    return 0;
}