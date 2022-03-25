#include<stdio.h>
#include<math.h>
int main()
  {
    float a,b,c;
    float r1,r2,real,img;
    printf("Enter the coefficients a, b, c");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
      printf("error enter another value");
      return 0;
    }
    float d=(b*b)-(4*a*c);
    if(d==0)
    {
      r1=-b/(2*a);
      r2=r1;
      printf("the roots are real and equal\n");
      printf("roots are %f and %f",r1,r2);
    }
    else
      if(d>0)
      {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("the roots are real and distinct\n");
        printf("roots are %f and %f",r1,r2);
      }
    else
      {
        real=(-b)/(2.0*a);
        img=sqrt(-d)/(2*a);
        printf("the roots are imaginary\n");
        printf("Root r1=%f+i%f",real,img);
        printf("root r2=%f-i%f",real,img);
      }
    return 0;
  }