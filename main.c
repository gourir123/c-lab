#include <stdio.h>
#include<math.h>
#define pi 3.14286
int main()
{
  float deg;
  printf("enter degree");
  scanf("%f",&deg);
  float x=deg*(pi/100);
  printf("the value of sin x=%f",sin(x));
  return 0;
  

  }