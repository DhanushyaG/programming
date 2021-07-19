#include<stdio.h>
int main()
{
  int n,rem,sum=0;
  printf("enter a number:");
  scanf("%d",&n);
  if(n>0)
  {
    while(n!=0)
    {
      rem=n%10;
      sum+=rem;
      n=n/10;
    }
    printf("sum of individual digits=%d",sum);
  }
  else
    printf("it is not a positive integer");
  return 0;
}
