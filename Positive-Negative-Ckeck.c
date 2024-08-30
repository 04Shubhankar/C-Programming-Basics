//C Program to Check Whether a Number is Positive or Negative

#include <stdio.h>


int main() {
    int in;

    printf("\nEnter a Number-->");
    scanf("%d" , &in);
    
    if(in>=0){
        printf("\nNumber is positive.");
    }

    else{
        printf("\nNumber is negative.");
    }


    return 0;
}
