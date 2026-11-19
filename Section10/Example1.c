//declare Array
//intialize Array
//print the size of array
//intialixe few elements of array
//show the index starts from 0
#include <stdio.h>

int main() {
    //declare Array
    int arr[5]={12,22};

    //initialize Array
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    //print the size of array
    printf("Size of array: %zu\n", sizeof(arr) );

    //show the index starts from 0
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }
    printf( "Value at 6th position: %d\n", arr[5] ); // This will cause undefined behavior since index 5 is out of bounds

    return 0;
}