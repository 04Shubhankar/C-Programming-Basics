//C Program to Access Elements of an Array Using Pointer
#include <stdio.h>

int main(){
    int array[]={1,2,3,4,5};
    int *ptr;
    int i;
    ptr=&array[0];
    for(i=0;i<5;i++){
        printf("%d",*ptr);
        ptr++;
        
    }
}