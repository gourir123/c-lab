#include<stdio.h>
#include<math.h>
#define pi 3.142586
int main()
{
  float deg;
  printf("Enter the number:");
  scanf("%f",&deg);
  float x=deg*(pi/180);
  int i=1;
  float num=x;
  float den=1;
  float term=x;
  float sum=x;
  do
    {
      i=i+2;
      num=-num*x*x;
      den=den*i*(i-1);
      term=num/den;
      sum=sum+term;
      
    }while(fabs(term)>=0.00001);
  printf("the value of user defined  sin(%2f) =%2f\n",deg,sum);
  printf("the value of builtin sin(%2f)=%2f\n",deg,sin(x));
  return 0;
  }