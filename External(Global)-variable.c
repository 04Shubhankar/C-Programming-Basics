//C Program Using External variable 
#include <stdio.h>

// Declare the global variable `i`
int i = 10;  // Definition and initialization of the external (global) variable

int main() {
    // Use extern to reference the global variable `i` declared outside this function
    extern int i;  // External variable declaration
    printf("The Value of External (Global) Variable 'i' is %d\n", i);

    return 0;
}

/*
Static Variables: The variables which are restricted to the scope in which they are declared.

Register Variables: These are the variables that are stored in the CPU register for faster access.

Syntax for Static Variables is as follows:
static data_type variable_name;
*/

