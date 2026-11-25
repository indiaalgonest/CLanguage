//Take a string from the user and check whether it contains only digits (0–9) or not.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int isDigits = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            isDigits = 0;
            break;
        }
    }

    if (isDigits)
    {
        printf("The string contains only digits.\n");
    }
    else
    {
        printf("The string does not contain only digits.\n");
    }

    return 0;
}