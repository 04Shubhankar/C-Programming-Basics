//  C Program to check whether a character is VOWEL or CONSONANT using switch

#include <stdio.h>
int main(){
    char  C;
    printf("Enter an Alphabet -->");
    scanf("%c" ,&C );
    
    switch (C)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':{
            printf("The Given Input is a VOWEL");
            break;
        }

        
        default:{
        printf("The Given input is a CONSONANT");
        break;

    }
        
    }
}