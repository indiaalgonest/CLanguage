/*
 * Section 12 - Lecture 3: Important String Library Functions
 *
 * Compile : gcc -Wall -Wextra -o string_funcs lecture3_string_functions_demo.c
 * Run     : ./string_funcs
 *
 * Optional (compile with -D flag):
 *   -DSHOW_TOO_SMALL  step 5: runs strcpy into a 5-byte array.
 *                     This is undefined behavior: it may crash or corrupt
 *                     memory. Use it only to talk about, not for real code.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    /* ---------- 1 - strlen: length of a string ---------- */
    printf("=== 1. strlen ===\n");
    char name[] = "Rahul";
    int length = strlen(name);
    printf("Length = %d\n", length);              /* 5, \0 not counted */
    printf("sizeof = %zu\n\n", sizeof(name));     /* 6, array includes \0 */

    /* ---------- 2 - strcpy: copy a string ---------- */
    printf("=== 2. strcpy ===\n");
    char first[20] = "Hello";
    char second[20];
    strcpy(second, first);                        /* destination, source */
    printf("%s\n\n", second);

    /* ---------- 3 - strcat: join two strings ---------- */
    printf("=== 3. strcat ===\n");
    char str1[30] = "Hello ";
    char str2[] = "World";
    strcat(str1, str2);                           /* result stays in str1 */
    printf("%s\n\n", str1);

    /* ---------- 4 - strcmp: compare strings ---------- */
    printf("=== 4. strcmp ===\n");
    char pass1[] = "abc123";
    char pass2[] = "abc123";
    if (strcmp(pass1, pass2) == 0) {
        printf("Strings are equal\n");            /* strcmp returned 0 */
    } else {
        printf("Strings are not equal\n");
    }

    /* the sign of the result (do not rely on exactly -1 or 1) */
    printf("apple  vs banana : %s\n",
           strcmp("apple", "banana") < 0 ? "negative" : "not negative");
    printf("banana vs apple  : %s\n",
           strcmp("banana", "apple") > 0 ? "positive" : "not positive");
    printf("Hello  vs hello  : %s\n\n",
           strcmp("Hello", "hello") == 0 ? "equal" : "not equal (case matters)");

    /* ---------- 5 - The mistake: destination too small ---------- */
    printf("=== 5. Destination size ===\n");
    char big[20];
    strcpy(big, "Rahul Sharma");                  /* 12 chars + \0 = 13, fits in 20 */
    printf("big   = %s\n", big);
#ifdef SHOW_TOO_SMALL
    char small[5];
    strcpy(small, "Rahul Sharma");                /* needs 13 bytes, has 5: UNDEFINED */
    printf("small = %s\n", small);
#endif

    return 0;
}