//C Program to Find Factors of a Number

#include <stdio.h>


int main() {
    int in;
    int i;

    printf("Enter a Number to find Factors of -->");
    scanf("%d" , &in);

    printf("The Factors are as follows\n");
    for(i=1 ; i<=in ; i=i+1){
        if (in%i==0){
            printf("%d,",i);

        }

    }
    return 0;
}
