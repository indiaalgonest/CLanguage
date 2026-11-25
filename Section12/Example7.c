//Count vowels, consonants, digits and spaces
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;                /* a letter that is not a vowel */
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
        /* anything else (punctuation) is not counted */
    }

    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);
    printf("Digits     : %d\n", digits);
    printf("Spaces     : %d\n", spaces);

    return 0;
}
