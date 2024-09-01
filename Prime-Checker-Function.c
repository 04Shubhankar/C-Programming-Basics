// Check if Number is Prime Number by creating a user defined function 
#include <stdio.h>

// Function to check if a number is prime
char checkPrimeNumber(int x) {
    int i;
    
    // A number less than 2 is not a prime number
    if (x < 2) {
        return 'N'; // Not a prime number
    }

    // Check for factors from 2 to sqrt(x)
    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 'N'; // Not a prime number
        }
    }
    return 'Y'; // Is a prime number
}

int main() {
    int num1, num2; // Variables to store input range
    char r;         // Variable to store result of prime check
    int i;          // Loop variable
    int temp;       // Temporary variable for swapping

    // Input range from user
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    // Ensure num1 is the smaller number
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("The Prime Numbers in the given Range are: ");
    
    // Loop through the range and check for prime numbers
    for (i = num1; i <= num2; i++) {
        r = checkPrimeNumber(i); // Check if the current number is prime
        if (r == 'Y') {
            printf("%d ", i); // Print prime numbers
        }
    }

    return 0;
}
