//Program to find Frequency of a charactor in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Array to store the input string
    int i, n = 0;   // 'i' is a loop counter, 'n' is to count the frequency
    char s;         // Variable to store the character whose frequency is to be found

    // Prompt user to enter a string
    printf("Enter a string: ");
    gets(str);  // Using gets() to read the string (not recommended due to potential buffer overflow)

    // Prompt user to enter the character to find in the string
    printf("\nEnter the character to find in the string (Case Sensitive): ");
    scanf("%c", &s);  // Read the character

    printf("You entered: %s\n", str);  // Display the entered string

    // Loop to iterate over each character in the string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == s) {  // If the character matches 's'
            n++;            // Increment the frequency counter
        }
    }

    // Display the frequency of the given character in the string
    printf("Frequency of given character '%c' in the string: %d\n", s, n);

    return 0;  // Return 0 to indicate successful execution
}
