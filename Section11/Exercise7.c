/*I will show you a few incorrect code snippets.
Incorrect code snippet 1:*/
#ifdef INCORRECT_SNIPPET_1

// A
int *p;
*p = 10;

// B
int n = 5;
int *q;
q = n;

// C
int arr[3] = {1, 2, 3};
int *r = arr;

for (int i = 0; i <= 3; i++)
    printf("%d ", *(r + i));

#endif

/*Your task is to identify the mistake and fix it.*/
#include <stdio.h>
int main() {
    // A
    int *p;
    int value = 10; // Declare a variable to hold the value
    p = &value; // Assign the address of the variable to the pointer

    // B
    int n = 5;
    int *q;
    q = &n; // Assign the address of n to the pointer

    // C
    int arr[3] = {1, 2, 3};
    int *r = arr;

    for (int i = 0; i < 3; i++) // Change condition to i < 3 to avoid out-of-bounds access
        printf("%d ", *(r + i));

    return 0;
}
