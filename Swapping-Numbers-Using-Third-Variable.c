// Program To Swap Numbers Using a third variable.

#include <stdio.h>  // Including the standard input-output header for input and output functions

int main() {
    int n1;    // Declaring an integer variable 'n1' to store the first number
    int n2;    // Declaring an integer variable 'n2' to store the second number
    int temp;  // Declaring a temporary variable 'temp' to assist in swapping the values

    // Prompting the user to enter the first number
    printf("Enter Number1 --> ");
    scanf("%d", &n1);  // Reading the value of 'n1' from user input

    // Prompting the user to enter the second number
    printf("Enter Number2 --> ");
    scanf("%d", &n2);  // Reading the value of 'n2' from user input

    // Swapping the values of 'n1' and 'n2' using the temporary variable 'temp'
    temp = n1;  // Storing the value of 'n1' in 'temp'
    n1 = n2;    // Assigning the value of 'n2' to 'n1'
    n2 = temp;  // Assigning the value stored in 'temp' (original 'n1') to 'n2'

    // Printing the swapped values of the numbers
    printf("Swapped Values are as follows\n");
    printf("Number 1: %d\n", n1);  // Displaying the new value of 'n1'
    printf("Number 2: %d", n2);    // Displaying the new value of 'n2'

    return 0;  // Indicating successful completion of the program
}
