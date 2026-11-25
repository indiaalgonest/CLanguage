/*Take a string from the user and convert:
Uppercase letters → Lowercase
Lowercase letters → Uppercase
Display the toggled string.*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;   // Convert to lowercase
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;   // Convert to uppercase
        }
    }

    printf("Toggled string: %s\n", str);

    return 0;
}