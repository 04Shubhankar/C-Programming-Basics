//C oprogram to Reverse a Number

#include <stdio.h>

int main() {
    int in;        // Variable to store the input number
    int ld;        // Variable to store the last digit of the input number
    int revn = 0;  // Variable to store the reversed number

    // Prompt the user to enter a number
    printf("Enter a number --> ");
    scanf("%d", &in);

    // Reversing Logic
    while (in != 0) {
        ld = in % 10;             // Extract the last digit
        revn = revn * 10 + ld;    // Append the last digit to the reversed number
        in = in / 10;             // Remove the last digit from the input number
    }

    // Display the reversed number
    printf("Reversed Number is %d\n", revn);

    return 0;
}
