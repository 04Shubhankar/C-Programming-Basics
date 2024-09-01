#include <stdio.h>

int main() {
    int num;
    int fact = 1; // Initialize factorial to 1
    
    printf("Enter the number to find the factorial of: ");
    scanf("%d", &num);

    // Check for non-negative integer
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial using a for loop
    for (int i = 1; i <= num; i++) {
        fact = fact * i; // Multiply fact by each i from 1 to num
    }

    printf("The factorial of %d is %d\n", num, fact);

    return 0;
}
