#include <stdio.h>

int main() {
    //declare three strings
    char name[]="Rahul";
    char anotherName[]={'A','m','i','t','\0',};
    char city[30]="Mumbai";
    //print the strings
    printf("=== 2. Print ===\n");
    printf("Name : %s\n",name);
    printf("AnotherName : %s\n",anotherName);
    printf("City : %s\n",city);
    //Size of array
    printf("\n=== 3. Sizes ===\n");
    printf("Size of name array: %zu\n", sizeof(name));
    printf("Size of anotherName array: %zu\n", sizeof(anotherName));
    printf("Size of city array : %zu\n", sizeof(city));
     //count characters befor \0
     int l=0;
     while ((name[l]!='\0'))
     {
        l++;
     }
     printf("Length in characher for name = %d\n",l);
     
    return 0;
}