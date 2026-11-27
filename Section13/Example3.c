/* Section 13, Lecture 5 - Common Errors
 * Memory Leak, Dangling Pointer, Double Free (and their safe versions)
 *
 * A menu picks the demo, so each error can be shown on its own
 * (the double free aborts the program, so it needs its own run).
 *
 * Compile: gcc -Wall -Wextra lecture5_common_errors_demo.c -o errors_demo
 * Run:     ./errors_demo      then type a number from the menu
 *
 * Expected: gcc -Wall prints two "used after free" warnings (in demo_dangling
 * and demo_double). They are intentional: those are the dangerous examples.
 * Show them on screen, they are the compiler catching the bug.
 *
 * Note: run it in a terminal. The abort message of the double free demo
 * appears after the "First free done." line when output goes to the screen.
 *
 * Optional: let AddressSanitizer find the bugs for you
 *   gcc -g -fsanitize=address lecture5_common_errors_demo.c -o errors_asan
 *   choose 1 -> reports 1200 bytes leaked in 3 allocations
 *   choose 3 -> reports heap-use-after-free
 *   choose 5 -> reports attempting double-free
 */
#include <stdio.h>
#include <stdlib.h>

/* ---------------- 1. Memory leak ---------------- */
void leaky_function() {
    int *ptr = (int*) malloc(100 * sizeof(int));
    if (ptr == NULL) return;
    ptr[0] = 1;
    /* Forgot to call free(ptr);  -> 400 bytes lost on every call */
}

void safe_function() {
    int *ptr = (int*) malloc(100 * sizeof(int));
    if (ptr == NULL) return;
    ptr[0] = 1;
    free(ptr);                         /* release what we allocated */
}

void demo_leak() {
    printf("[DANGEROUS] calling leaky_function() 3 times...\n");
    for (int i = 0; i < 3; i++) {
        leaky_function();
    }
    printf("Program says: done (no visible error!)\n");
    printf("But 3 x 400 = 1200 bytes were leaked.\n");
    printf("Run the ASan build to see the leak report.\n");
}

void demo_leakfix() {
    printf("[SAFE] calling safe_function() 3 times...\n");
    for (int i = 0; i < 3; i++) {
        safe_function();
    }
    printf("Program says: done. Every malloc had a free.\n");
}

/* ---------------- 2. Dangling pointer ---------------- */
void demo_dangling() {
    printf("[DANGEROUS] use after free\n");
    int *ptr = (int*) malloc(sizeof(int));
    if (ptr == NULL) return;
    *ptr = 50;
    printf("Before free: %d\n", *ptr);

    free(ptr);                         /* memory is released */

    /* ptr is now dangling. Reading it is undefined behavior:
       it may crash, print garbage, or even look correct.     */
    printf("After free : %d   <-- NOT guaranteed to be 50\n", *ptr);
}

void demo_danglingfix() {
    printf("[SAFE] free, then set the pointer to NULL\n");
    int *ptr = (int*) malloc(sizeof(int));
    if (ptr == NULL) return;
    *ptr = 50;
    printf("Before free: %d\n", *ptr);

    free(ptr);
    ptr = NULL;                        /* best practice */

    if (ptr != NULL) {
        printf("After free : %d\n", *ptr);
    } else {
        printf("After free : ptr is NULL, so we do not use it\n");
    }
}

/* ---------------- 3. Double free ---------------- */
void demo_double() {
    printf("[DANGEROUS] double free\n");
    int *ptr = (int*) malloc(sizeof(int));
    if (ptr == NULL) return;
    free(ptr);
    printf("First free done.\n");
    free(ptr);                         /* DOUBLE FREE: undefined behavior */
    printf("Second free done.\n");     /* usually never reached */
}

void demo_doublefix() {
    printf("[SAFE] set ptr = NULL after free\n");
    int *ptr = (int*) malloc(sizeof(int));
    if (ptr == NULL) return;
    free(ptr);
    ptr = NULL;
    printf("First free done, ptr = NULL.\n");
    free(ptr);                         /* free(NULL) is safe: does nothing */
    printf("Second free done, no crash.\n");
}

/* ---------------- 4. Why set ptr to NULL? ---------------- */
void demo_why() {
    printf("free() does NOT set the pointer to NULL for us:\n");
    int *ptr = (int*) malloc(10 * sizeof(int));
    if (ptr == NULL) return;

    free(ptr);
    printf("  after free(ptr)    : ptr == NULL ? %s\n", ptr == NULL ? "yes" : "no");

    ptr = NULL;                        /* we must do it ourselves */
    printf("  after ptr = NULL   : ptr == NULL ? %s\n", ptr == NULL ? "yes" : "no");
    free(ptr);
    printf("  free(NULL) is safe : program still running\n");
}

int main() {
    int choice;

    printf("=== Common Dynamic Memory Errors ===\n");
    printf("1. Memory leak           (dangerous)\n");
    printf("2. Memory leak fixed     (safe)\n");
    printf("3. Dangling pointer      (dangerous)\n");
    printf("4. Dangling pointer fixed (safe)\n");
    printf("5. Double free           (dangerous: program aborts)\n");
    printf("6. Double free fixed     (safe)\n");
    printf("7. Why set ptr to NULL?\n");
    printf("Enter your choice (1-7): ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    printf("\n");

    switch (choice) {
        case 1: demo_leak();        break;
        case 2: demo_leakfix();     break;
        case 3: demo_dangling();    break;
        case 4: demo_danglingfix(); break;
        case 5: demo_double();      break;
        case 6: demo_doublefix();   break;
        case 7: demo_why();         break;
        default: printf("Please choose a number from 1 to 7\n"); return 1;
    }
    return 0;
}