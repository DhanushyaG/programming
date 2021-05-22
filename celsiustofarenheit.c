#include<stdio.h>
int main()
{
  float c,f,ce,fa;
  printf("\n enter a celsius value to convert to farenheit");
  scanf("%f",&c);
  fa=(1.8*c)+32;
  printf("\n\t %0.2 of celcius=%0.2f farenheit",c,fa);
  prrintf("\n enter a farenheit value to convert to celsius");
  scanf("%f",&f);
  ce=(f-32)/1.8;
  printf("\n\t %0.2f farenheit=%0.2f celcius",f,ce);
         return 0;
         }
