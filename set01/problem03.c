#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,sum=0;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}

int input()
{
  int x;
  printf("enter a number\n");
  if(scanf("%d",&x)!=1)
  {
    printf("error");
    exit(0);
  }
  return x;
}

int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}

void output(int a,int b,int sum)
{
  printf("the sum of %d and %d is %d \n",a,b,sum);
}






