//C Program to Access Elements of an Array Using Pointer.

#include <stdio.h>

int main() {
    int i;  // Loop counter
    int array[5];  // Array to hold 5 integer elements
    int *ptr = array;  // Pointer to the first element of the array

    // Input elements into the array
    for (i = 0; i < 5; i++) {
        printf("Enter Element %d: ", i + 1);  // Prompt the user to enter an element
        scanf("%d", &array[i]);  // Store the input directly into the array
    }

    // Display the elements of the array using the pointer
    printf("You Entered: ");
    for (i = 0; i < 5; i++) {
        printf("\n%d ", *ptr);  // Dereference the pointer to get the value at the current address
        ptr++;  // Increment the pointer to point to the next array element
    }

    return 0;  // Return 0 to indicate successful execution
}
