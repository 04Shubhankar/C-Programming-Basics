// Finding the Largest Common Multiple 

#include <stdio.h>

int main() {
    int n1, n2;        // Variables to store the two input numbers
    int test = 0;      // Flag variable to control the loop
    int lcm = 1;       // Variable to store the Least Common Multiple (LCM)

    // Prompt the user to enter two numbers
    printf("Enter Number 1: ");
    scanf("%d", &n1);
    printf("\nEnter Number 2: ");
    scanf("%d", &n2);

    // Loop until we find the LCM
    while (test == 0) {
        // Check if 'lcm' is divisible by both 'n1' and 'n2'
        if (lcm % n1 == 0 && lcm % n2 == 0) {
            test = 1;  // Set the flag to 1 to stop the loop
        } else {
            lcm = lcm + 1;  // Increment 'lcm' to check the next number
        }
    }

    // Print the calculated LCM
    printf("LCM of %d and %d is %d\n", n1, n2, lcm);
  
    return 0;
}
