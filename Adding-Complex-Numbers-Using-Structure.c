#include <stdio.h>

// Define a structure to represent a complex number
struct complex {
    double real;   // Real part of the complex number
    double imagi;  // Imaginary part of the complex number
};

// Function to add two complex numbers
void add(struct complex num1, struct complex num2) {
    struct complex sum;  // Structure to store the sum of the complex numbers

    // Add the real and imaginary parts separately
    sum.real = num1.real + num2.real;
    sum.imagi = num1.imagi + num2.imagi;

    // Display the sum of the complex numbers
    printf("The Sum of the Numbers is: %lf + %lfi\n", sum.real, sum.imagi);
}

int main() {
    // Initialize two complex numbers
    struct complex a = {2, 2};  // First complex number: 2 + 2i
    struct complex b = {4, 6};  // Second complex number: 4 + 6i

    // Call the add function to compute the sum of a and b
    add(a, b);

    return 0;  // Return 0 to indicate successful execution
}
