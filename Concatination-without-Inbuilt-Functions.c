// C Program to Copy String without using strcpy() without using the library function strcpy()

#include <stdio.h>

int main() {
    char input1[100];   // Array to store the first input string
    char input2[100];   // Array to store the second input string
    char result[200];   // Array to store the concatenated result string

    int i, j = 0;       // Declare variables for loop counters

    printf("Enter string 1: ");  // Prompt the user to enter the first string
    gets(input1);  // Read the first string from user input

    printf("Enter string 2: ");  // Prompt the user to enter the second string
    gets(input2);  // Read the second string from user input

    // Copy first string into result
    for (i = 0; input1[i] != '\0'; i++) {
        result[j] = input1[i];  // Copy each character from input1 to result
        j++;  // Increment the result index
    }

    // Copy second string into result
    for (i = 0; input2[i] != '\0'; i++) {
        result[j] = input2[i];  // Copy each character from input2 to result
        j++;  // Increment the result index
    }

    result[j] = '\0';  // Add the null terminator to the end of the result string

    printf("\nConcatenated String: %s\n", result);  // Print the concatenated result string

    return 0;  // Return 0 to indicate successful execution
}
