#include <stdio.h>
#include <stdlib.h>
int input();
int compare(int a,int b,int c);
void output(int a,int b,int c, int lar);

int main()
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=compare(a,b,c);
  output(a,b,c,d);
}

int input()
{
  int x;
  printf("enter three num \n");
  scanf("%d",&x);
  return (x);
}

int compare(int a,int b,int c)
{
  if (a>=b)
  {
  if(a>=c)
  {
    return(a);
  }
  }
  else if(b>=a)
  {
    if(b>=c)
    {
      return(b);
    }
  }
  else
    return(c);
}

void output(int a, int b, int c, int lar)
{
  printf("the largest of %d,%d and %d is %d \n",a,b,c,lar);
}