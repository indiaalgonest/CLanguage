//Voting and Driving
#include <stdio.h>

int main() {
    int age,hasLicense;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a driving license? (1 for Yes, 0 for No): ");
    scanf("%d", &hasLicense);
    if(age >=18)
    {
        printf("You are eligible to vote.\n");
    }
    
    if(age >=18 && hasLicense == 1)
    {
        printf("You are eligible to drive.\n");
    }
    else if(age >=18 && hasLicense == 0)
    {
        printf("You are eligible to vote but not to drive.\n");
    }
    else
    {
        printf("You are not eligible to vote or drive.\n");
    }
    return 0;
}