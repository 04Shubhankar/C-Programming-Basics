//Finding Length of the String Whitout USing Inbuild Functions

#include <stdio.h>  // Including the standard input-output header

int main() {
    char str[100];  // Declaring a character array to store the input string, with a maximum size of 100 characters
    int i = 0, length = 0;  // Initializing variables: 'i' for iteration and 'length' for storing the string length

    // Prompting the user to enter a string
    printf("Enter a string: ");
    gets(str);  // Reading the input string from the user; this function reads until a newline is encountered
                // gets() function reads the entire string including the spaces.
                
    // Looping through the string until the null terminator '\0' is found
    while (str[i] != '\0') {
        length++;  // Incrementing the length counter for each character in the string
        i++;       // Moving to the next character in the array
    }

    // Printing the calculated length of the string
    printf("Length of the string: %d\n", length);

    return 0;  // Indicating that the program executed successfully
}
