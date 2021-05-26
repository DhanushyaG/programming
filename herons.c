#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,s;
  float area;
  printf("\n enter three numbers for a,b and c";
  scanf("%d%d%d",&a,&b,&c);
  s=(a+b+c)/2
  area=sqrt(s*(s-a)(s-b)(s-c));
  printf("\n area of the triangle=%f",area);
  return 0
  }
