#include<stdio.h>
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}

int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  {
    return a;
  }
  if(b>a&&b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

void output(int a,int b,int c,int largest)
{
  printf("%d is the largest of the three",largest);
}

int main()
{
  int a,b,c,large;
  printf("enter the three numbers:");
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(a,b,c,large);
  return 0;
}