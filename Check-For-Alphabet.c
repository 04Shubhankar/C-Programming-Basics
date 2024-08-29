//C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>  // Including the standard input-output header for input and output functions

int main() {
    char in;       // Declaring a variable 'in' to store the input character
    int ASCI;      // Declaring a variable 'ASCI' to store the ASCII value of the character

    // Prompting the user to enter a character
    printf("Enter a Character --> ");
    scanf("%c", &in);  // Reading the character input from the user

    // Assigning the ASCII value of the input character to the variable 'ASCI'
    ASCI = (int)in;  // Corrected: Properly casting the character to its ASCII value

    // Checking if the character is an uppercase alphabet (ASCII range 65-90)
    if (ASCI >= 65 && ASCI <= 90) {
        printf("Entered Character is an Alphabet\n");
    }
    // Checking if the character is a lowercase alphabet (ASCII range 97-122)
    else if (ASCI >= 97 && ASCI <= 122) {
        printf("The Character is an Alphabet\n");
    }
    // If the character is not in the alphabet ranges above
    else {
        printf("The Character is Not an Alphabet\n");
    }

    return 0;  // Indicating successful completion of the program
}
