/*Take a sentence from the user and find the longest word in it.

If there are multiple words of the same maximum length, print the first one.*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200];
    char longest[200];
    char current[200];

    int maxLen = 0;
    int currLen = 0;
    int j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; ; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            current[j++] = str[i];
        }
        else
        {
            current[j] = '\0';
            currLen = strlen(current);

            if (currLen > maxLen)
            {
                maxLen = currLen;
                strcpy(longest, current);
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}