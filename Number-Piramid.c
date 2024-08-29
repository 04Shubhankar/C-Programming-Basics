//Code to print a piramid of Numbers.
#include <stdio.h>  // Including the standard input-output header

int main() {
    int rows, i, j, k, num = 1;  // Declaring variables: rows for the number of rows, i for outer loop, j for inner loop, k for spaces, and num for the numbers

    // Prompting the user to enter the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);  // Reading the number of rows from the user

    // Outer loop for each row of the pyramid
    for (i = 1; i <= rows; i++) {
        // Inner loop to print leading spaces for alignment
        for (k = 1; k <= rows - i; k++) {
            printf(" ");  // Printing spaces to align the numbers in a pyramid shape
        }

        // Inner loop to print numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", num);  // Printing the current number followed by a space
            num++;  // Incrementing the number for the next print
        }

        printf("\n");  // Moving to the next line after completing a row
    }

    return 0;  // Indicating successful completion of the program
}
