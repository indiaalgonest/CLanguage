/*
Create a simple menu-driven program:
1. Print Hello
2. Print Welcome
3. Exit
*/
#include <stdio.h>
int main() {
    int choice;
    do {
        printf("Menu:\n");
        printf("1. Print Hello\n");
        printf("2. Print Welcome\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("Welcome\n");
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}