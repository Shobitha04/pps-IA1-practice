#include<stdio.h>
float input()
{
  printf("enter a number:");
  float k;
  scanf("%f",&k);
  return k;
}

float my_sqrt(float f)
{
  float sqrt;
  float a=f/2;
  float a2=f;
  while(a2!=a)
  {
     a2=a;
     a=(a+(f/a))/2;
  }
     return a;
}

void output(float n,float sqrt_result)
{
  printf("square root of %f is %f",n,sqrt_result);
}

int main()
{
  float sqrt,n;
  n=input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}