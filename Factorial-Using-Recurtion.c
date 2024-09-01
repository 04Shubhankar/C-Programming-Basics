#include <stdio.h>

// Function to calculate factorial using recursion
int fact(int a) {
    // Base case: factorial of 0 is 1
    if (a == 0) {
        return 1;
    }

    // Recursive case: a * factorial of (a - 1)
    return a * fact(a - 1);
}

int main() {
    int num;
    int output;

    // Prompt the user to enter a number
    printf("Enter the number to find the factorial of: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        output = fact(num);
        // Print the result
        printf("The factorial of %d is %d\n", num, output);
    }

    return 0;
}
