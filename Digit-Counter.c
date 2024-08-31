//C Program to Count Number of Digits in an Integer using while loop

#include <stdio.h>

int main() {
    int n;            // Declare an integer variable to store the user's input
    int lastdigit;    // Declare an integer variable to store the last digit of the number
    int digits = 0;   // Initialize a counter for the number of digits to 0

    // Prompt the user to enter a number
    printf("Enter the Number-->");
    scanf("%d", &n);  // Read the input number from the user

    // Loop to count the number of digits in the number
    while (n != 0) {
        lastdigit = n % 10;   // Get the last digit of the number (not actually used)
        digits = digits + 1;  // Increment the digit count
        n = n / 10;           // Remove the last digit from the number
    }

    // Display the total number of digits
    printf("The Number of digits in the given number is %d", digits);
    printf("\n");

    return 0;
}
