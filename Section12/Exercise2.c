/*Take a string from the user and remove all the spaces from it.

Display the string after removing spaces.
Input: Hello World C Programming
Output: HelloWorldCProgramming*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a sentance : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("Without spaces : %s\n",str);
    return 0;
}