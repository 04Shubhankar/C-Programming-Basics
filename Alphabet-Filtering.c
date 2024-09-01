//Code To find remove all charactors except alphabets.

#include <stdio.h>
#include <ctype.h> 

int main() {
    char input[100];
    char result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            result[j] = input[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("Result: %s\n", result);

    return 0;
}
