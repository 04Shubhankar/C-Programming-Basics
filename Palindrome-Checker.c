#include <stdio.h>

int main() {
    int in;          // Variable to store the input number
    int ld;          // Variable to store the last digit of the number
    int revn = 0;    // Variable to store the reversed number

    printf("Enter a number --> ");  // Prompt the user for input
    scanf("%d", &in);               // Read the input number from the user

    int original = in;  // Store the original number for comparison later

    // Loop to reverse the digits of the number
    while (in != 0) {
        ld = in % 10;                  // Get the last digit of the number
        revn = revn * 10 + ld;         // Append the last digit to the reversed number
        in = in / 10;                  // Remove the last digit from the number
    }

    // Check if the original number is equal to its reversed form
    if (revn == original) {
        printf("The Number is Palindrome\n");  // If yes, it is a palindrome
    } else {
        printf("The Number is not Palindrome\n");  // If no, it is not a palindrome
    }

    return 0;         // Return 0 to indicate successful execution
}
