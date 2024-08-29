//Program to Convert Fahrenheit to Celsius:

#include <stdio.h>  // Including the standard input-output header for input and output functions

int main() {
    int F;  // Declaring an integer variable to store the temperature in Fahrenheit
    int C;  // Declaring an integer variable to store the temperature in Celsius (Centigrade)

    // Prompting the user to input the temperature in Fahrenheit
    printf("Input temperature in degree Fahrenheit: ");  
    scanf("%d", &F);  // Reading the input value and storing it in variable F

    // Converting the temperature from Fahrenheit to Celsius using the conversion formula
    // (Using 5.0/9.0 to ensure correct floating-point division)
    C = (F - 32) * (5.0 / 9.0);  
    
    // Printing the converted temperature in Celsius
    // Since C is an integer, the result will be displayed as an integer
    printf("The Temperature in Degree Centigrade is %d\n", C);  

    return 0;  // Indicating successful completion of the program
}
