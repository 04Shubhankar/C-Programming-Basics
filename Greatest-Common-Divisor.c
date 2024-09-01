#include <stdio.h>

int main() {
    int n1; // First input number
    int n2; // Second input number
    int gcd = 1; // Initialize gcd to a positive value
    int test = 0; // Not needed in this code, but declared

    // Prompt the user to enter the first number
    printf("Enter Number 1: ");
    scanf("%d", &n1);

    // Prompt the user to enter the second number
    printf("Enter Number 2: ");
    scanf("%d", &n2);

    // Set the initial value of gcd to the smaller of n1 or n2
    if (n1 > n2) {
        gcd = n2; // Start checking from the smaller number
    } else {
        gcd = n1; // Start checking from the smaller number
    }

    // Loop indefinitely until the GCD is found
    while (1) {
        // If both numbers are divisible by the current value of gcd
        if (n1 % gcd == 0 && n2 % gcd == 0) {
            // Print the GCD
            printf("GCD: %d\n", gcd);
            break; // Exit the loop since we found the GCD
        } else {
            // Decrement gcd to check the next smaller number
            gcd = gcd - 1;
        }
    }

    return 0;
}
