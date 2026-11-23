/*
 * Section 11 - Lecture 4: Relationship Between Arrays and Pointers
 *  *
 * Compile: gcc lecture4_arrays_pointers_demo.c -o demo
 * Run:     ./demo
 */
#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    /* ---------------------------------------------------------
     * 1. Same address: arr and &arr[0]
     * --------------------------------------------------------- */
    printf("=== 1. arr vs &arr[0] ===\n");
    printf("arr       = %p\n", (void *)arr);
    printf("&arr[0]   = %p\n", (void *)&arr[0]);
    printf("equal?    = %d\n\n", arr == &arr[0]);

    /* ---------------------------------------------------------
     * 2. Two notations side by side: arr[i] and *(arr + i)
     * --------------------------------------------------------- */
    printf("=== 2. arr[i] vs *(arr + i) ===\n");
    for (int i = 0; i < 5; i++) {
        printf("i = %d   arr[i] = %d   *(arr + i) = %d\n",
               i, arr[i], *(arr + i));
    }
    printf("arr[2] = %d, *(arr + 2) = %d, 2[arr] = %d  (2[arr] is rarely used)\n\n",
           arr[2], *(arr + 2), 2[arr]);

    /* ---------------------------------------------------------
     * 3. Traversal: array name, then a separate pointer
     * --------------------------------------------------------- */
    printf("=== 3. Traversal ===\n");
    printf("Method 1 (*(arr + i)): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    printf("Method 2 (ptr++):      ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
    printf("arr[0] is still %d; ptr moved past the end.\n\n", arr[0]);

    /* ---------------------------------------------------------
     * 4. arr++ is not allowed (array name is a constant pointer)
     * --------------------------------------------------------- */
    printf("=== 4. arr++ ===\n");
    ptr = arr;      /* reset the pointer */
    ptr++;          /* allowed */
    printf("ptr++ works: *ptr = %d\n", *ptr);
    /* arr++;          <-- UNCOMMENT to see the compiler error:
                           error: lvalue required as increment operand */
    printf("(uncomment 'arr++;' in the source to see the error)\n\n");

    /* ---------------------------------------------------------
     * 5. sizeof(arr) vs sizeof(ptr)
     * --------------------------------------------------------- */
    printf("=== 5. sizeof ===\n");
    printf("sizeof(arr) = %zu bytes\n", sizeof(arr));
    printf("sizeof(ptr) = %zu bytes\n", sizeof(ptr));
    printf("elements    = %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}