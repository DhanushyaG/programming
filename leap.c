#include<stdio.h>
int main()
{
  int year;
  printf("\n enter a year");
  scanf("%d",& year);
  if ((year %4==0)&&((year%100!=0)||(year%400==0))
      {
        printf("\n it is a leap year");
      }
      else
      {
        printf("\n notb a leap year");
      }
      return 0;
      }
