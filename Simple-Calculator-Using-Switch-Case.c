//C program to design a calculator with basic operations using a switch case
#include <stdio.h>
int main(){
    char  op;
    int n1,n2;
    printf("Enter Number 1-->");
    scanf("%d",&n1);

    printf("Enter Number 2-->");
    scanf("%d",&n2);

    printf("Enter Operator -->");
    scanf("\n%c" ,&op );

    switch(op){
        case '+':{
            printf("The Sum of the Two Numbers Is -->");
            printf("%d",n1+n2);
            break;

        }

        case '-':{
            printf("The difference of the Two Numbers Is -->");
            printf("%d",n1-n2);
            break;

        }

        case '/':{
            printf("The Quotient of the Two Numbers Is -->");
            printf("%d",n1/n2);
            break;

        }

        case '%':{
            printf("The Remainder of the Two Numbers Is -->");
            printf("%d",n1%n2);
            break;

        }

        case '*':{
            printf("The Product of the Two Numbers Is -->");
            printf("%d",n1*n2);
            break;

        }

        default:{
            printf("Invalid Entry");
            break;
        }
    }



}
