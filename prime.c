#include<stdio.h>
main()
{
  int i,n,count=0,num;
  printf("enter a number");
  scanf("%d",&n);
  i=1;
  while(i<=num)
  {
    if(n%i==0)
      count ++;
    i++;
  }
  if(count==2)
    printf("it is a prime number");
  else
    printf("it is not a prime number");
}
  
