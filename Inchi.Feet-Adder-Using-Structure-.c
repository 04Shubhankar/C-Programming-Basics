//Write a C Program to Add Two Distances (in inch-feet) System Using Structures

#include <stdio.h>

// Structure to store distance in feet and inches
struct Distance {
    int feet;   // Variable to store feet part of the distance
    int inch;   // Variable to store inch part of the distance
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;           // Declare a structure to store the result of addition

    // Add feet and inches separately
    result.feet = d1.feet + d2.feet;  // Add feet part of both distances
    result.inch = d1.inch + d2.inch;  // Add inch part of both distances

    // Convert inches to feet if inches are equal or greater than 12
    if (result.inch >= 12) {
        result.feet += result.inch / 12;  // Add extra feet from inches
        result.inch %= 12;                // Keep only the remaining inches
    }

    return result;   // Return the final result
}

int main() {
    struct Distance distance1, distance2, sum;  // Declare structures to hold the input distances and the result

    // Input for the first distance
    printf("Enter the first distance (feet inch): ");
    scanf("%d %d", &distance1.feet, &distance1.inch);

    // Input for the second distance
    printf("Enter the second distance (feet inch): ");
    scanf("%d %d", &distance2.feet, &distance2.inch);

    // Call the function to add the distances
    sum = addDistances(distance1, distance2);

    // Output the result
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inch);

    return 0;   // End of the program
}
