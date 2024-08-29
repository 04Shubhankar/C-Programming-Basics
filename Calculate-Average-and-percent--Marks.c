// Caluclation of the Average of Five Subjects

#include <stdio.h>  // Including standard input-output header

int main() {
    // Declaring variables to store marks of five subjects and the calculated results
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int total;
    float average;  // Changed to float for a more accurate average
    float percent;  // Changed to float for a more accurate percentage

    // Taking input for each subject's marks
    printf("Enter Marks of Subject 1: ");
    scanf("%d", &sub1);

    printf("\nEnter Marks of Subject 2: ");
    scanf("%d", &sub2);

    printf("\nEnter Marks of Subject 3: ");
    scanf("%d", &sub3);

    printf("\nEnter Marks of Subject 4: ");
    scanf("%d", &sub4);

    printf("\nEnter Marks of Subject 5: ");
    scanf("%d", &sub5);  

    // Calculating total, average, and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;  // Summing up marks of all subjects
    average = total / 5.0;  // Calculating average (use 5.0 to ensure float division)
    percent = (total / 500.0) * 100;  // Assuming each subject is out of 100 marks

    // Printing the calculated results
    printf("\nTotal Marks: %d", total);
    printf("\nAverage Marks: %.2f", average);  // Displaying average up to 2 decimal places
    printf("\nPercentage: %.2f%%", percent);  // Displaying percentage up to 2 decimal places

    return 0;  // Indicating successful completion of the program
}
