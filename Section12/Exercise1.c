/*Take a sentence from the user (using fgets) and count the number of words in it.
(Assume words are separated by spaces)*/
#include <stdio.h>

int main(){
    char str[100];
    int words=0, inWord=0;
    printf("Enter a sentance : ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            inWord=0;
        }
        else if(!inWord)
        {
            inWord=1;
            words++;
        }
    }
    printf("Words in the sentance are %d\n",words);
    return 0;
}