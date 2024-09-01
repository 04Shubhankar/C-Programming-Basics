//Write a C program to check whether number is EVEN or ODD using switch?

#include <stdio.h>
int main(){
    int num;
    printf("Enter Number 1-->");
    scanf("%d",&num);


    switch (num%2) {

        case 0:{
            printf("The Number is Even");
            break;
        }

        default:{
            printf("The Number Is odd");
            break;
        }
    }



}