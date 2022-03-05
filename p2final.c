#include<stdio.h>
struct _fraction
{
  int num;
  int den;
};
typedef struct _fraction Fraction;

Fraction input()
{
  Fraction a;
  printf("Enter the numerator\n");
  scanf("%d",&a.num);
  printf("Enter the denominator\n");
  scanf("%d",&a.den);
  return a;
}

Fraction largest_frac(Fraction f1,Fraction f2,Fraction f3)
{
  float t1,t2,t3;
  Fraction largest;
  t1=f1.num*10/f1.den;
  t2=f2.num*10/f2.den;
  t3=f3.num*10/f3.den;
  {
  if(t1>t2 && t1>t3){
    largest.num=f1.num;
    largest.den=f1.den;}
  else if(t2>t3){
    largest.num=f2.num;
    largest.den=f2.den;
    }
  else{
    largest.num=f3.num;
    largest.den=f3.den;}
}
  return largest;
  }

void output(Fraction largest)
{
  printf("Bigger is %d/%d",largest.num,largest.den);
}

int main()
{
  Fraction f1,f2,f3,largest;
  f1=input();
  f2=input();
  f3=input();
  largest=largest_frac(f1,f2,f3);
  output(largest);
  return 0;
}

















