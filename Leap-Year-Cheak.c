// Program to find if given year is leap year or not 

#include <stdio.h>

int main() {
    int num;
    printf("Enter Year  -> ");
    scanf("%d", &num); 
  

    // Logic to determine if the year is a leap year
    if (num % 400 == 0 && num % 4 == 0) {
        printf("Its A Leap Year ");
    } 
    else {
        printf("Its Not a Leap Year");
    }

    return 0;
}
