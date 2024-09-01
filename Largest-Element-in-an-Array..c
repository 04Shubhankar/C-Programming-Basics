//C Program to Find Largest number in an array Using Pointer To Array
#include <stdio.h>

int main() {
    int i, n;
    int *ptr;
    int largest; // Variable to store the largest number

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n]; // Declare an array of size 'n'

    // Input the elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    ptr = array; // Pointer points to the beginning of the array
    largest = *ptr; // Initialize largest to the first element of the array

    // Find the largest number using the pointer
    for (i = 0; i < n; i++) {
        if (*(ptr + i) > largest) { // Compare the current element with 'largest'
            largest = *(ptr + i); // Update 'largest' if a larger element is found
        }
    }

    // Output the largest number
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}