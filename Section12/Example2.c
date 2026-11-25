/*
 * Section 12 - Lecture 2: String Input and Output
 *
 * Compile : gcc -Wall -Wextra -o string_io lecture2_string_io_demo.c
 * Run     : ./string_io
 *
 * Optional extras (compile with -D flags):
 *   -DSHOW_AMP       step 3: shows the warning when you write &name
 *   -DSHOW_NO_CLEAR  step 6: shows fgets failing without clearing the buffer
 *
 * Type these when asked:
 *   Step 2 -> Rahul Sharma
 *   Step 3 -> 21 Rahul
 *   Step 4 -> Rahul Sharma   then   Amit Kumar
 */
#include <stdio.h>

/* Throw away characters up to and including the next newline. */
static void clear_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main(void)
{
    char name[50];

    /* ---------- 1 - Print: %s and the loop ---------- */
    printf("=== 1. Print ===\n");
    char title[] = "Rahul Sharma";
    printf("Using %%s : %s\n", title);

    printf("Using loop: ");
    int i = 0;
    while (title[i] != '\0') {
        printf("%c", title[i]);
        i++;
    }
    printf("\n\n");

    /* ---------- 2 - The space problem ---------- */
    printf("=== 2. Space problem ===\n");
    printf("Enter your name (type: Rahul Sharma): ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);   /* prints only Rahul */
    clear_buffer();                 /* discard " Sharma\n" left behind */
    printf("\n");

    /* ---------- 3 - No & with strings ---------- */
    printf("=== 3. No & with strings ===\n");
    int age;
    printf("Enter age and a name (type: 21 Rahul): ");
    scanf("%d", &age);              /* int needs & */
    scanf("%s", name);              /* array name is already an address */
    printf("Age = %d, name = %s\n", age, name);
#ifdef SHOW_AMP
    scanf("%s", &name);             /* gcc warns: expects char *, got char (*)[50] */
#endif
    clear_buffer();
    printf("\n");

    /* ---------- 4 - scanf versus fgets ---------- */
    printf("=== 4. scanf versus fgets ===\n");
    char name1[50];
    char name2[50];

    printf("Enter name using scanf: ");
    scanf("%s", name1);
    clear_buffer();                 /* clear the input buffer */

    printf("Enter full name using fgets: ");
    fgets(name2, sizeof(name2), stdin);

    /* ---------- 5 - fgets reads the full line ---------- */
    printf("\nUsing scanf : %s\n", name1);
    printf("Using fgets : %s\n", name2);   /* name2 still ends with \n */

#ifdef SHOW_NO_CLEAR
    /* ---------- 6 - Without clearing the buffer ---------- */
    printf("\n=== 6. No clearing ===\n");
    printf("Enter name using scanf: ");
    scanf("%s", name1);             /* the Enter key stays in the buffer */
    printf("Enter full name using fgets: ");
    fgets(name2, sizeof(name2), stdin);   /* reads that leftover \n at once */
    printf("name2 = [%s]\n", name2);
#endif

    return 0;
}