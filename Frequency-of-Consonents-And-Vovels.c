//Code to find the frequency of consonents vovels and all things in a string.,

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vovel = 0, conso = 0, digits = 0, whitespace = 0;

    printf("Enter a string: ");
    gets(str);
    strlwr(str);

    printf("You entered: %s\n", str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vovel++;
        } else if (str[i] == ' ') {
            whitespace++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            conso++;
        }
    }

    printf("The Frequency of Vowels is %d\n", vovel);
    printf("The Frequency of Consonants is %d\n", conso);
    printf("The Frequency of Digits is %d\n", digits);
    printf("The Frequency of Whitespaces is %d\n", whitespace);

    return 0;
}
