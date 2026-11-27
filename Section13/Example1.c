//Allocating memory with malloc and calloc functions
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=5;
    int *ptr1,*ptr2;
    //using malloc
    ptr1=(int*) malloc(n*sizeof(int));
    //using calloc
    ptr2=(int*) calloc(n,sizeof(int));
    if(ptr1 == NULL || ptr2 == NULL )
    {
        printf("Memory allocation failed....");
        return 1;
    }
    printf("Values using malloc:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr1[i]);
    }
    printf("\nValues using calloc:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr2[i]);
    }
    //free memory
    free(ptr1);
    free(ptr2);
    return 0;
}