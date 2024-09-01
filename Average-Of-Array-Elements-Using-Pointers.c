#include <stdio.h>

int main() {
    int i, n, e;  // Declare integer variables
    int num, sum;  // Variables for number and sum
    sum = 0;  // Initialize sum to 0

    printf("Enter the Number: ");  // Print statement to prompt for the number of elements
    scanf("%d", &n);  // Read the number of elements

    int array[n];  // Declare an array of size n

    // Loop to input array elements
    for (i = 0; i < n; i++) {
        printf("Enter The element: ");  // Prompt to enter the elements
        scanf("%d", &e);  // Read the element
        array[i] = e;  // Assign the element to the array
    }

    // Loop to calculate the sum of array elements
    for (i = 0; i < n; i++) {
        num = array[i];  // Assign current array element to num
        sum = sum + num;  // Add num to sum
    }

    printf("The Average of the given Numbers is %f\n", (float)sum / n);  // Print the average

    return 0;  // Return 0 to indicate successful execution
}
