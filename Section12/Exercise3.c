/*Take a string and a character as input from the user.

Count how many times that character appears in the string (case-sensitive).*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200];
    char ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets()
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("'%c' appears %d time(s)\n", ch, count);

    return 0;
}