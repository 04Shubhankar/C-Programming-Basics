/*Write a function that receives variable number of arguments, where the arguments 
are the coordinates of point. Based on the number of arguments received, the 
function should display type of shape like a point, line, triangle, etc. That can be
drawn.*/

#include <stdio.h>
int shapes( int a ){
    if (a==1)
    printf("Invalid");

    if (a == 2)
    printf("Line");

    if (a ==3)
    printf("Trangle");

    if (a==4)
    printf("Square or Rectangle");

    if (a==5)
    printf("Polygon") ;
}

int main(){
    int a;
    printf("Enter the Number of Dots.\n");
    scanf("%d",&a);
    shapes(a);
    
}