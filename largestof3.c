#include<stdio.h>
int main()
{
  int a,b,c,big;
  printf("/n enter three numbers for a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  big=a>b?(a>c?a:c):(b>c?b:c);
  printf("greatest amoung the three number=%d",big);
  return 0;
}
