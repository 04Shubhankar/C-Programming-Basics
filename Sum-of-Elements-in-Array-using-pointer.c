//C Program to Calculate Sum Using Arrays and Pointers.
#include <stdio.h>

int main(){
    int i , n,e;
    int *ptr;
    int num,sum = 0;
    printf("Enter the Number ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter The element:");
        scanf("%d",&e);
        array[i]=e;
     }
    
    ptr=&array[0];
    for(i=0;i<n;i++){
        num=("%d",*ptr);
        sum=num+sum;
        ptr++;

    }
    printf("%d",sum);

}