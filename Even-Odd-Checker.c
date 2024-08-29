// Program to check if given number is even or odd.

#include <stdio.h>

int main() {
    int num;
    printf("Enter A Number -> ");
    scanf("%d", &num); 

    if (num % 2 == 0) {
        printf("The Number is even");
    } 
    else {
        printf("The Number is odd");
    }

    return 0;
}
