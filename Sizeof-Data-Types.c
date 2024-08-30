// C Program to Find the Size of int, float, double, and char

#include <stdio.h>  // Include standard input-output header file

int main() {
    // The sizeof() operator is used to determine the size (in bytes) of a data type or a variable.
    // It is evaluated at compile time and returns the size as an unsigned integer of type size_t.

    // Print the size of an integer in bytes
    printf("The Size of Int is: %d bytes", sizeof(int));

    // Print the size of a float in bytes
    printf("\nThe Size of Float is: %d bytes", sizeof(float));

    // Print the size of a double in bytes
    printf("\nThe Size of Double is: %d bytes", sizeof(double));

    // Print the size of a character in bytes
    printf("\nThe Size of Char is: %d bytes", sizeof(char));

    return 0;  // Indicate that the program ended successfully
}
