//Using realloc function in C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=5;
    int *ptr;
    //using malloc to give intiall memory
    ptr=(int*) malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed....");
        return 1;
    }
    printf("Assiging the values:\n");
    for(int i=0;i<n;i++)
    {
        ptr[i]=(i+1)*10;
    }
    printf("\nOriginal Values:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    int new=8;
    int *temp= (int*) realloc(ptr,new*sizeof(int));
    if(temp==NULL)
    {
        printf("Memory re-allocation failed....");
        return 1;
    }else
    {
        ptr=temp;
    }
     printf("\nAssiging the values after re-allocation:\n");
    for(int i=0;i<new;i++)
    {
        ptr[i]=(i+1)*10;
    }
    printf("\nRe-allocated Values:\n");
    for(int i=0;i<new;i++)
    {
        printf("%d ",ptr[i]);
    }
    //free memory
    free(ptr);
   
    return 0;
}