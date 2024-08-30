//C Program to calculate area of circle using a function like macro circleArea

#include <stdio.h>  // Include the standard input-output header file

#define circleArea(r) (3.1451*r*r)  // Define a function-like macro to calculate the area of a circle

int main() {  // Start of the main function
    int r = 10;  // Declare and initialize the radius 'r' of the circle to 10
    printf("%f", circleArea(r));  // Print the area of the circle using the macro 'circleArea'
    return 0;  // Return 0 to indicate successful completion of the program
}

