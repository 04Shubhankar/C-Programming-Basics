//C Program to find factorial of a nubmer using while loop


#include <stdio.h>


int main() {
    int num;
    int fact = 1;
    int i = 1;

    printf("Enter The Number to find the factorial of: ");
    scanf("%d", &num);

    while (i <= num) {
        fact =fact*i ;  // Factorial using the Logic n(n-1)
        i++;
    }

    printf("The factorial required is %d\n", fact);
   
    return 0;
}
