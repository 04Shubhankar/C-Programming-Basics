/*Write a program that asks the user to enter a number and based on this number it reports which colors in the rainbow does the number represents*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number from 1 to 7: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Violet\n");
            break;
        case 2:
            printf("Indigo\n");
            break;
        case 3:
            printf("Blue\n");
            break;
        case 4:
            printf("Green\n");
            break;
        case 5:
            printf("Yellow\n");
            break;
        case 6:
            printf("Orange\n");
            break;
        case 7:
            printf("Red\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
