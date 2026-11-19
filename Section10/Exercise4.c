//Take 7 integers from the user and a key value. Search whether the key exists in the array or not. If found, print its index.
#include <stdio.h>
int main() {
    int arr[7];
    int key, found = 0, index = -1;

    printf("Enter 7 integers:\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter integer No. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the key value to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 7; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found) {
        printf("Key %d found at index %d.\n", key, index);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}