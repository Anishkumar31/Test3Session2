/*
Write a program to find the smallest of three fractions.
struct _fraction
{
int num,den;
};
typedef _fraction Fraction
Fraction input_fraction();
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
*/

#include <stdio.h>

struct _fraction
{
int num,den;
};

typedef struct _fraction Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("Enter One Fraction (NUM DEN):\n");
  scanf("%d%d", &f.num, &f.den);
  return f;
}

Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
 float a = (float)f1.num / f1.den; 
 float b = (float)f2.num / f2.den; 
 float c = (float)f3.num / f3.den; 

  if (a < b && a < c)
  {
    return f1;
  }
  else if(b < c)
  {
    return f2;
  }
  else
  {
    return f3;
  } 
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  printf("The smallest of %d/%d , %d/%d and %d/%d is %d/%d\n", f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}

int main()
{
  Fraction f1 = input_fraction();
  Fraction f2 = input_fraction();
  Fraction f3 = input_fraction();

  Fraction small = smallest_fraction(f1, f2, f3);
  output(f1, f2, f3, small);
  return 0;
  }