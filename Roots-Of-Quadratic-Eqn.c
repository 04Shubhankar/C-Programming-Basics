#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;              // Coefficients of the quadratic equation
    float D;                    // Discriminant
    float Real1, Real2;         // Real roots
    float RealI, ImaginaryP1;   // Parts of complex roots

    // Prompt the user to enter coefficients
    printf("Enter Value of Coefficient A -> ");
    scanf("%f", &a);

    printf("Enter Value of Coefficient B -> ");
    scanf("%f", &b);

    printf("Enter Value of Coefficient C -> ");
    scanf("%f", &c);

    // Calculate the discriminant using the formula D = b^2 - 4ac
    D = pow(b, 2) - 4 * a * c;
    printf("\nThe Discriminant of the Equation is %.2f\n", D);

    // Determine the nature of the roots based on the discriminant
    if (D > 0) {
        // If discriminant is positive, the equation has two distinct real roots
        printf("\nTHE EQUATION HAS TWO DISTINCT REAL ROOTS:\n");
        Real1 = (-b + sqrt(D)) / (2 * a);  // Calculate the first real root
        Real2 = (-b - sqrt(D)) / (2 * a);  // Calculate the second real root
        printf("ROOT1 -> %.2f\n", Real1);
        printf("ROOT2 -> %.2f\n", Real2);

        // Check if the roots satisfy the quadratic equation
        if (fabs(a * Real1 * Real1 + b * Real1 + c) < 1e-6 && fabs(a * Real2 * Real2 + b * Real2 + c) < 1e-6) {
            printf("Roots are verified and correct.\n");
        } else {
            printf("There seems to be an error in the root calculation.\n");
        }
    } else if (D == 0) {
        // If discriminant is zero, the equation has one real root
        Real1 = -b / (2 * a);  // Calculate the real root
        printf("\nTHE EQUATION HAS ONE REAL ROOT:\n");
        printf("ROOT -> %.2f\n", Real1);

        // Check if the root satisfies the quadratic equation
        if (fabs(a * Real1 * Real1 + b * Real1 + c) < 1e-6) {
            printf("Root is verified and correct.\n");
        } else {
            printf("There seems to be an error in the root calculation.\n");
        }
    } else {
        // If discriminant is negative, the equation has two complex roots
        RealI = -b / (2 * a);  // Calculate the real part of the complex roots
        ImaginaryP1 = sqrt(-D) / (2 * a);  // Calculate the imaginary part of the complex roots
        printf("\nTHE EQUATION HAS TWO COMPLEX ROOTS:\n");
        printf("ROOT1 -> %.2f + %.2fi\n", RealI, ImaginaryP1);
        printf("ROOT2 -> %.2f - %.2fi\n", RealI, ImaginaryP1);

        // Check if the complex roots satisfy the quadratic equation
        // For complex roots, the real part should satisfy the equation
        if (fabs((RealI * RealI - ImaginaryP1 * ImaginaryP1) * a + b * RealI + c) < 1e-6) {
            printf("Complex roots are verified and correct.\n");
        } else {
            printf("There seems to be an error in the complex root calculation.\n");
        }
    }

    return 0;
}
