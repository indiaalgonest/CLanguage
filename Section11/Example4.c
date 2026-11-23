/*
 * Section 11 - Lecture 5: Pointers and Functions (Pass by Reference)
 *
 * Compile: gcc lecture5_pass_by_reference_demo.c -o demo
 * Run:     ./demo
 */
#include <stdio.h>

/* 1. Pass by value: n is only a copy */
void incByValue(int n)
{
    n = n + 1;
}

/* 2. Pass by reference: p holds the address of the caller's variable */
void increment(int *p)
{
    (*p)++;     /* brackets matter: *p++ would move the pointer instead */
}

/* 3. Swap two numbers */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* 4. Return two results through pointers */
void squareCube(int n, int *sq, int *cu)
{
    *sq = n * n;
    *cu = n * n * n;
}

/* 5. Arrays are naturally passed by reference */
void doubleAll(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}

int main(void)
{
    /* ---------------------------------------------------------
     * 1. Pass by value: the original does not change
     * --------------------------------------------------------- */
    printf("=== 1. Pass by value ===\n");
    int v = 5;
    incByValue(v);
    printf("v after incByValue(v) = %d   (still 5)\n\n", v);

    /* ---------------------------------------------------------
     * 2. Increment using a pointer
     * --------------------------------------------------------- */
    printf("=== 2. Increment by reference ===\n");
    increment(&v);
    printf("v after increment(&v) = %d   (now 6)\n\n", v);

    /* ---------------------------------------------------------
     * 3. Swap: before and after, with addresses
     * --------------------------------------------------------- */
    printf("=== 3. Swap ===\n");
    int x = 10, y = 20;
    printf("&x = %p, &y = %p\n", (void *)&x, (void *)&y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap : x = %d, y = %d\n\n", x, y);

    /* ---------------------------------------------------------
     * 4. Square and cube (multiple return values)
     * --------------------------------------------------------- */
    printf("=== 4. Square and cube ===\n");
    int s, c;
    squareCube(6, &s, &c);
    printf("square = %d, cube = %d\n\n", s, c);

    /* ---------------------------------------------------------
     * 5. Arrays: no & needed, the name is already an address
     * --------------------------------------------------------- */
    printf("=== 5. Arrays ===\n");
    int nums[5] = {8, 2, 3, 4, 5};
    doubleAll(nums, 5);
    printf("nums after doubleAll: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}