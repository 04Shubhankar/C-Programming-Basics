// Multiplying two matrices (2D Arrays)

#include <stdio.h>

int main() {
    int r1, c1, r2, c2; // Variables to store the number of rows and columns of the matrices
    int i, j, k; // Loop variables

    // Input the dimensions of the first matrix
    printf("Enter the number of Rows and Columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    // Input the dimensions of the second matrix
    printf("Enter the number of Rows and Columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Number of columns in Matrix 1 must be equal to the number of rows in Matrix 2.\n");
        return 1; // Exit if multiplication is not possible
    }

    int matrix1[r1][c1]; // Declare the first matrix
    int matrix2[r2][c2]; // Declare the second matrix
    int matrixanswer[r1][c2]; // Declare the resultant matrix

    // Input elements for the first matrix
    printf("Enter the elements of Matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter the elements of Matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize all elements of the resulting matrix to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            matrixanswer[i][j] = 0; // Initialize the element to 0
            for (k = 0; k < c1; k++) {
                // Perform matrix multiplication
                matrixanswer[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the resulting matrix after multiplication
    printf("The Resulting Matrix after Multiplication is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", matrixanswer[i][j]); // Print each element
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
