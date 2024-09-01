//Write a program to read and store information about insurance policy holder

#include <stdio.h>

// Define a structure to store policyholder information
struct policyholder {
    char name[100];   // Name of the policyholder
    char gender;      // Gender of the policyholder ('M' or 'F')
    char minority;    // Minority status of the policyholder ('Y' or 'N')
    int duration;     // Duration of the policy in years
};

int main() {
    struct policyholder poly1; // Declare a variable of type 'struct policyholder'

    // Prompt and read the policyholder's name
    printf("Enter the name of the policyholder: ");
    scanf("%s", poly1.name);

    // Prompt and read the policyholder's gender
    printf("Enter the gender of the policyholder (M/F): ");
    scanf(" %c", &poly1.gender); // Note: Space before %c to consume any leftover newline character

    // Prompt and read the minority status of the policyholder
    printf("Is the policyholder a minority (Y/N): ");
    scanf(" %c", &poly1.minority); // Note: Space before %c to consume any leftover newline character

    // Prompt and read the duration of the policy
    printf("Enter the duration of the policy (in years): ");
    scanf("%d", &poly1.duration);

    // Display the entered information
    printf("\nPolicyholder Information:\n");
    printf("Name: %s\n", poly1.name);
    printf("Gender: %c\n", poly1.gender);
    printf("Minority Status: %c\n", poly1.minority);
    printf("Duration: %d years\n", poly1.duration);

    return 0;
}
