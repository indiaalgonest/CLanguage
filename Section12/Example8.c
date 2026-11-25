//Convert a string to uppercase / lowercase (manual)
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char upper[100];
    char lower[100];
    strcpy(upper, str);                  /* work on copies */
    strcpy(lower, str);

    /* Convert to Uppercase */
    for (int i = 0; upper[i] != '\0'; i++) {
        if (upper[i] >= 'a' && upper[i] <= 'z') {
            upper[i] = upper[i] - 32;
        }
    }

    /* Convert to Lowercase */
    for (int i = 0; lower[i] != '\0'; i++) {
        if (lower[i] >= 'A' && lower[i] <= 'Z') {
            lower[i] = lower[i] + 32;
        }
    }

    printf("Original  : %s\n", str);
    printf("Uppercase : %s\n", upper);
    printf("Lowercase : %s\n", lower);

    return 0;
}

