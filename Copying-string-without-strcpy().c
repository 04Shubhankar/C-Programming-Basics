// C Program to Copy String without using strcpy() without using the library function strcpy()

#include <stdio.h>

int main() {
    char input[100];   // Array to store the input string
    char result[100];  // Array to store the copied string

    int i = 0;  // Loop counter

    // Prompt the user to enter a string
    printf("Enter a string: ");
    gets(input);  // Read the input string

    // Copy the input string to the result string character by character
    while (input[i] != '\0') {  // Loop until the null terminator is found
        result[i] = input[i];  // Copy each character from input to result
        i++;  // Increment the counter
    }

    result[i] = '\0';  // Add the null terminator to the end of the copied string

    // Print the copied string
    printf("\nCopied String: %s\n", result);

    return 0;  // Return 0 to indicate successful execution
}
