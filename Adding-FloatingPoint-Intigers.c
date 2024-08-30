#include <stdio.h>

int main() {
    float in1;  // First floating point number
    float in2;  // Second floating point number

    // Prompt the user for the first floating point number
    printf("Enter Floating Point Number 1: ");
    scanf("%f", &in1);

    // Prompt the user for the second floating point number
    printf("Enter Floating Point Number 2: ");
    scanf("%f", &in2);

    // Calculate and print the result of the multiplication
    printf("\nThe Multiplication of the Floating Point Numbers is: %f\n", in1 * in2);
    
    return 0;
}
