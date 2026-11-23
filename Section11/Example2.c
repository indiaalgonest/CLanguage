#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;     /* points to the first element */

    /* 1. Traverse with ptr++ (print address and value) */
    printf("1. Using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("   Address: %p  Value: %d\n", ptr, *ptr);
        ptr++;              /* move to the next integer */
    }

    /* 2. Move forward and backward */
    ptr = numbers;
    printf("\n2. Moving forward and backward:\n");
    printf("   *ptr           = %d\n", *ptr);
    ptr++;
    printf("   after ptr++    = %d\n", *ptr);
    ptr = ptr + 2;
    printf("   after ptr + 2  = %d\n", *ptr);
    ptr--;
    printf("   after ptr--    = %d\n", *ptr);
    ptr = ptr - 2;
    printf("   after ptr - 2  = %d\n", *ptr);

    /* 3. Index: arr[i] versus *(ptr + i) */
    ptr = numbers;
    printf("\n3. numbers[i] versus *(ptr + i):\n");
    for (int i = 0; i < 5; i++) {
        printf("   numbers[%d] = %d    *(ptr + %d) = %d\n", i, numbers[i], i, *(ptr + i));
    }
    printf("   *ptr + 1   = %d\n", *ptr + 1);
    printf("   *(ptr + 1) = %d\n", *(ptr + 1));

    /* 4. Difference between two pointers */
    int *p1 = &numbers[1];
    int *p2 = &numbers[4];
    printf("\n4. Pointer difference:\n");
    printf("   p2 - p1 = %td elements\n", p2 - p1);
    printf("   in bytes = %td\n", (char *)p2 - (char *)p1);

    /* 5. Observe: step size depends on the data type */
    char letters[3] = {'a', 'b', 'c'};
    double values[3] = {1.5, 2.5, 3.5};
    char *cp = letters;
    double *dp = values;
    printf("\n5. Step size by data type:\n");
    printf("   int    pointer moves %zu bytes\n", sizeof(int));
    printf("   char   pointer moves %td byte\n", (char *)(cp + 1) - (char *)cp);
    printf("   double pointer moves %td bytes\n", (char *)(dp + 1) - (char *)dp);

    return 0;
}