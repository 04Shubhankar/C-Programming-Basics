//Creating and Using Structures in C

#include <stdio.h>  // Include the standard input-output header file

// Define a structure named 'student' to hold information about a student
struct student {
    char name[100];  // Array to store the student's name
    int RollNo;      // Integer to store the student's roll number
    float marks;     // Float to store the student's marks
};

int main() {  // Start of the main function
    struct student s[10];  // Declare an array of 10 'student' structures
    int i, n, roll;        // Declare variables for iteration, number of students, and roll number
    char scan;             // Declare a variable to store user choice for search

    // Prompt the user to enter the number of students
    printf("Enter the number of students (maximum 10): ");
    scanf("%d", &n);  // Read the number of students from the user

    // Loop to input information for each student
    for (i = 0; i < n; i++) {
        // Prompt and read the student's name
        printf("\nEnter Name: ");
        scanf("%s", s[i].name);  // Read the student's name

        // Prompt and read the student's roll number
        printf("Enter Roll No: ");
        scanf("%d", &s[i].RollNo);  // Read the student's roll number

        // Prompt and read the student's marks
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);  // Read the student's marks
    }

    // Prompt the user to choose whether to search for a student
    printf("\nTo Search For a Student Type 'Y' and Press Enter Else Type No.-->");
    scanf(" %c", &scan);  // Read the user's choice

    // Check if the user chose to search for a student
    if (scan == 'Y' || scan == 'y') {
        // Prompt the user to enter the roll number of the student to search
        printf("Enter Roll No: ");
        scanf("%d", &roll);  // Read the roll number to search for

        int found = 0;  // Variable to track if the student is found

        // Loop through the array of students to find the one with the matching roll number
        for (i = 0; i < n; i++) {
            if (s[i].RollNo == roll) {  // Check if the current student's roll number matches the search roll number
                // Print the found student's information
                printf("\nStudent Information:\n");
                printf("Name: %s\n", s[i].name);
                printf("Roll No: %d\n", s[i].RollNo);
                printf("Marks: %.2f\n\n", s[i].marks);
                found = 1;  // Set found to 1 indicating the student was found
                break;  // Exit the loop as the student has been found
            }
        }

        // If the student was not found, print a message
        if (!found) {
            printf("\nStudent with Roll No %d not found.\n", roll);
        }
    }

    return 0;  // Return 0 to indicate successful completion of the program
}
