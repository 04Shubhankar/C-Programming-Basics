// C program to find number of days in a month using switch case?

#include <stdio.h>
int main(){
    int month;
    printf("Enter Month number=>");
    scanf("%d",&month);


    switch (month) {

        case 1:{
            printf("Month 1 Has 30 Days  ");
            break;
        }

        case 2:{
            printf("Month 2 Has 28 Days  ");
            break;
        }

        case 3:{
            printf("Month 3 Has 31 Days  ");
            break;
        }

        case 4:{
            printf("Month 4 Has 30 Days  ");
            break;
        }

        case 5:{
            printf("Month 5 Has 31 Days  ");
            break;
        }

        case 6:{
            printf("Month 6 Has 30 Days  ");
            break;
        }

        case 7:{
            printf("Month 7 Has 31 Days  ");
            break;
        }

        case 8:{
            printf("Month 8 Has 31 Days  ");
            break;
        }

        case 9:{
            printf("Month 9 Has 30 Days  ");
            break;
        }

        case 10:{
            printf("Month 10 Has 31 Days  ");
            break;
        }

        case 11:{
            printf("Month 11 Has 30 Days  ");
            break;
        }

        case 12:{
            printf("Month 12 Has 31 Days  ");
            break;
        }


        default:{
            printf("Invalid Entry");
            break;
        }
    }



}
