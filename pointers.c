#include<stdio.h>
#include <math.h>
int main()
{
float a[20];
  float *ptr;
  int n;
  printf("enter the number of elements");
  scanf("%d",&n);
  ptr=a;
  printf("enter the elements of the array:");
  for(int i=0;i<n;i++)
    {
      scanf("%f",ptr);
      ptr++;
    }
  ptr=a;
  for(int i=0;i<n;i++)
    {
      printf("%f\n",*ptr);
      ptr++;
    }
  ptr=a;
  float sum=0;
  for(int i=0;i<n;i++)
    {
      sum=sum+*ptr;
      ptr++;
    }
  float mean=sum/n;
  ptr=a;
  float var=0;
  for(int i=0;i<n;i++)
  {
    var=var+pow((*ptr-mean),2);
    ptr++;
  }
  var=var/n;
  float sd=sqrt(var);
  printf("sum=%f",sum);
  printf("variance=%f",var);
  printf("standard deviation=%f",sd);
  return 0;
  }