#include <stdio.h>

// taking user input, the program seemingly prints all memory addresses? 
// writing this comment using moonlander keyboard
int main()
{

    // initialise array
    int arr[5];

    // Take user input
    printf("Enter an array of 5 integers:\n");
    scanf("%i %i %i %i %i", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
   
    // How many ints (4 bytes) in arr[]
    int length = sizeof(arr)/sizeof(arr[0]);


    // Print all elements in arr[]
    for(int i = 0; i < length; i++) {
        printf("%i\n",arr[i]);
    }

    int temp = 0;

    // Swap i with i+1 if i>(i+1)
    for(int i = 0; i < length-1; i++) {
        for(int j = i+1; j < length; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Print all elements in arr[]
    for(int i = 0; i < length; i++) {
        printf("%i\n",arr[i]);
    }
    return 0;

}
