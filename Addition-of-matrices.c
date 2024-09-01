// Adding Two matrices (2-D Array)

#include <stdio.h>

int main() {
    int r1, c1;
    int r2, c2;
    int i, j;

    printf("Enter the number of Rows and Columns for Matrix: ");
    scanf("%d %d", &r1, &c1);
    int matrix1[r1][c1];

    printf("Enter the elements of Matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    r2 = r1;
    c2 = c1;

    int matrix2[r2][c2];

    printf("Enter the elements of Matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int matrixanswer[r1][c1];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            matrixanswer[i][j] = matrix2[i][j] + matrix1[i][j];
        }
    }

    printf("The Sum of the Matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", matrixanswer[i][j]);
        }
        printf("\n");
    }

   return 0;
}