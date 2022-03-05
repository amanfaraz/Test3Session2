#include <stdio.h>
void input(int *num1,int *num2, int *den1,int *den2)
{
  printf("Enter the Numerator and Denominator respectively: /t");
  scanf("%d%d",num1,den1);
  printf(""Enter the second Numerator and Denominator respectively: /t");
    scanf("%d%d",num2,den2);
}
void add(int num1,int num2,int den1, int den2, int *num3, int *den3);
if (den1==den2)
{
  *num3=num1+num2;
  *den3=den1;
}
else
{
  *num3=(num1*den2+num2*den1);
  *den3=(den1*den2);
}
if (*num3>*den3)
{
  for(int i=2;i<=(*num3/2);i++)
    {}
}