/*Take two strings from the user and check whether they are anagrams of each other or not.

(Anagram means both strings contain the same characters with the same frequency, e.g., “listen” and “silent”)*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100], str2[100];
    int freq1[256] = {0};
    int freq2[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check lengths first
    if (strlen(str1) != strlen(str2))
    {
        isAnagram = 0;
    }
    else
    {
        // Count character frequencies
        for (int i = 0; str1[i] != '\0'; i++)
        {
            freq1[(unsigned char)str1[i]]++;
        }

        for (int i = 0; str2[i] != '\0'; i++)
        {
            freq2[(unsigned char)str2[i]]++;
        }

        // Compare frequencies
        for (int i = 0; i < 256; i++)
        {
            if (freq1[i] != freq2[i])
            {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}