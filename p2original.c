#include<stdio.h>
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}


int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
 if (b>a && b>c)
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
  printf("%d is the largest of all the three numbers",largest);
}

int main()
{
  int a,b,c,largest;
  printf("enter the three numbers:");
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  printf("%d is the largest of all the three numbers",largest);
  return 0;
}


