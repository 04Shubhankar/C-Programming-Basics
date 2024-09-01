//array of function pointers

#include <stdio.h>

// Define four functions that perform division and return float
float one(int a, int b) {
    float c = (float)a / b;  // Explicit casting to float to avoid integer division
    return c;
}

float two(int x, int y) {
    return (float)x / y;  // Explicit casting to float to avoid integer division
}

float three(int i, int j) {
    return (float)i / j;  // Explicit casting to float to avoid integer division
}

float four(int m, int n) {
    return (float)m / n;  // Explicit casting to float to avoid integer division
}

int main() {
    int i;
    // Declare an array of function pointers
    float (*parray[4])(int, int) = {one, two, three, four};

    // Call each function via the function pointer array
    for (i = 0; i < 4; i++) {
        // Pass sample arguments (e.g., 10, 2) to each function
        printf("Result from function %d: %f\n", i + 1, parray[i](10, 2));
    }

    return 0;
}
