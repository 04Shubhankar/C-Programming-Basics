//C Program to Swap Numbers in Cyclic Order Using Call by Reference

#include <stdio.h>

// Function to swap three numbers in cyclic order using pointers
void swap(int *a, int *b, int *c) {
    int temp = *c;   // Store the value of 'c' in a temporary variable
    *c = *b;         // Assign the value of 'b' to 'c'
    *b = *a;         // Assign the value of 'a' to 'b'
    *a = temp;       // Assign the stored value of 'c' (in temp) to 'a'
}

int main() {
    int a, b, c;   // Declare three integer variables to hold the input values

    printf("Enter 3 values respectively:\n");  // Prompt user for input
    scanf("%d", &a);  // Read the first value
    scanf("%d", &b);  // Read the second value
    scanf("%d", &c);  // Read the third value

    // Display the values before swapping
    printf("The values before swapping are ->\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    // Call the swap function, passing the addresses of 'a', 'b', and 'c'
    swap(&a, &b, &c);

    // Display the values after swapping
    printf("The values after swapping are ->\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;  // Return 0 to indicate successful execution
}
