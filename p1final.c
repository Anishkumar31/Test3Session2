#include<stdio.h>

void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter the fraction value\n");
  scanf("%d%d%d%d",num1,den1,num2,den2);
}

void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  int x,y,gcd;
  x=((num1*den2)+(num2*den1));
  y=den1*den2;
  for(int i=1;i<=x && i<=y;++i)
    {
      if(x%i==0 && y%i==0)
      {
        gcd=i;
      }
    }
  *num3=x/gcd;
  *den3=y/gcd;
}

void output(int num3,int den3)
{
  printf("addition is %d/%d",num3,den3);
}

int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num3,den3);
  return 0;
}