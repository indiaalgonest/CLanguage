// Menu driven program using do while loop

#include <stdio.h>

int main(){

    printf("Menu Driven Program:\n");
    printf("1. Print 1 to 5\n");
    printf("2. Print 6 to 10\n");
    printf("3. Exit\n");
    int choice;
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("You chose to print 1 to 5:\n");
                int i = 1;
                while(i <= 5){
                    printf("%d\t", i);
                    i++;
                }
                printf("\n");
                break;
            case 2:
                printf("You chose to print 6 to 10:\n");
                int j = 6;
                while(j <= 10){
                    printf("%d\t", j);
                    j++;
                }
                printf("\n");
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again Enter (1-3).\n");
        }
    } while(choice != 3);

    return 0;
}