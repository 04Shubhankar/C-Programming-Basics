// C program to read gender (M/F) and print corresponding gender using switch?

#include <stdio.h>
int main(){
    char  G;
    printf("Enter (M/F) -->");
    scanf("%c" ,&G );
    switch (G)
    {
        case 'M':
        case 'm':{
            printf("Male");
            break;
        }

        case 'F':
        case 'f':{
            printf("Female");
            break;
        }


        
        default:{
        printf("Invalid Entry");
        break;

    }
        
    }
}