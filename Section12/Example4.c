//Find Length of a String (Without strlen)
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Please enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\0")]='\0';
    //Manual length calculation
    int length=0;
    while (str[length]!='\0')
    {
        /* code */
        length++;
    }
    printf("Manual length = %d\n",length);
    printf("Length with strlen fun =%d\n",strlen(str));
    return 0;
}