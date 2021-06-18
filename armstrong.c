#include<stdio.h>
main()
{
  int num,tem,rem,sum=0;
  printf("enter a number");
  scanf("%d",&num);
  tem=num;
  while(num!=0)
  {
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num=num/10;
  }
  if(tem==sum)
    printf("the number is a armstrong number");
  else
    printf("the number is not armstrong number");
}
