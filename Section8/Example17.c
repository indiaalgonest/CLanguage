//Menu Exit only when the user choose 0 to exit the program
#include <stdio.h>
int main() { 
    int choice;
    while(1) 
    { // Infinite loop
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 0) {
            printf("Exiting the program.\n");
            break; // Exit the loop if user chooses 0
        }
        
        switch(choice) 
        {
            case 1:
                printf("You chose Option 1\n");
                break;
            case 2:
                printf("You chose Option 2\n");
                break;
            case 3:
                printf("You chose Option 3\n");
                break;
            case 0:
                printf("Exiting the program.\n");
                break; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}