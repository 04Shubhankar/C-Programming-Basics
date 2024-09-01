// Function to find Sum of N Natural Numbers

#include <stdio.h>

// Function to compute the sum of natural numbers up to 'a' using recursion
int sum(int a) {
    // Base case: if 'a' is 0, the sum is 0
    if (a == 0) {
        return 0;
    }
    
    // Recursive case: sum of 'a' is 'a' plus the sum of natural numbers up to 'a-1'
    return a + sum(a - 1);
}

int main() {
    int num; // Variable to store the user's input

    // Prompt the user for input
    printf("Enter a Natural Number Till which the sum is to be found: ");
    scanf("%d", &num);

    // Calculate the sum using the recursive function
    int result = sum(num);

    // Display the result
    printf("The Sum of Natural Numbers till %d is %d", num, result);
    return 0;
}
