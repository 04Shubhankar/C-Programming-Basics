// Code to convert Days into years weeks and days

#include <stdio.h> 
int main()
{
  int years;
  int yearsremainder;
  int week;
  int weekremainder;
  int days;
  printf("Enter No. of Days to convert-->");
  scanf("%d",&days);
  years = days /365;
  yearsremainder = days%365;
  week=yearsremainder/7;
  weekremainder=yearsremainder%7;
  days =  weekremainder;
  printf("years - > %d",years);
  printf("\nWeeks - > %d",week);
  printf("\nDays - > %d",days);

  return 0;
}

  