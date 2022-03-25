#include<stdio.h>
int main()
{
 float t=0;
  float c=0;
 int m=100;
  int u=0;
  char n[20];
  printf("enter the name=");
  gets(n);
  printf("enter the no of units:");
  scanf("%d",&u);
  if(u<0)
  {
      printf("invalid input\n");
      printf("retry with valid input\n");
    return 1;
    }
  if(u>=0&&u<=200)
  {
    c=u*0.8;
    }
  else
    if(u>200&&u<=300)
      c=(200*0.8)+((u-200)*0.9);
  else
      c=(200*0.8)+(100*0.9)+(u-300);
  
  t=c+m;
  if(t>400)
    t=t+(t*0.15);
  printf("electricity bill\n\n");
  printf("name:%s\n",n);
  printf("no of units:%d\n",u);
  printf("total bill amount:%f\n",t);
  return 0;
  }