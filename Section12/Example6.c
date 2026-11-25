//Check string is Palindrom
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;                    /* Not palindrome */
        }
        start++;
        end--;
    }
    return 1;                            /* Palindrome */
}

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome\n", str);
    } else {
        printf("\"%s\" is not a palindrome\n", str);
    }

    return 0;
}
