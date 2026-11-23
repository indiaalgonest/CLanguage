#include <stdio.h>
int main(){
    /* 1. Declare and initialize */ 
    int num = 10;
    int *ptr = &num;
    /* 2. Print num, &num, ptr and *ptr */  
    printf("num: %d\n", num);
    printf("&num: %p\n", &num);
    printf("ptr: %p\n", ptr);
    printf("*ptr: %d\n", *ptr);

    /* 3. Compare: &num and ptr must match */
    if (&num == ptr) {
        printf("ptr and &num point to the same location\n");
    } else {
        printf("ptr and &num do not point to the same location\n");
    }
    /* 4. Modify the value using the pointer */
    *ptr = 20;
    printf("After modifying *ptr, num: %d\n", num);
    /* 5. Try: float and char pointers */
    float f = 3.14;
    float *fptr = &f;
    printf("f: %f\n", f);
    printf("fptr: %p\n", fptr);
    printf("*fptr: %f\n", *fptr);

    char c = 'A';
    char *cptr = &c;
    printf("c: %c\n", c);
    printf("cptr: %p\n", cptr);
    printf("*cptr: %c\n", *cptr);

    return 0;

}