//Write a C program to input principle (amount), time and rate (P, T, R) and find Compound Interest?

#include <stdio.h> 
#include <math.h>

int main()
{
  int P;
  int R;
  int T;
  int CI;

  printf("Input The Principle Amount->");
  scanf("%d", &P);

  printf(" \nInput The Time Period->");
  scanf("%d", &T);

  printf(" \nInput The Rate Of Intrest->");
  scanf("%d", &R);
  
  CI = P * pow(1 + R/100,T);


  printf("\nThe Compund Intrest is --> %d" , CI);



  return 0;


}


  