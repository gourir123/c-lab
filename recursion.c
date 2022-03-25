#include<stdio.h>
int btod(int);
int main()
{
  int n;
  printf("enter the binary number");
  scanf("%d",&n);
  int t=n;
  int c=0;
  while(n!=0)
    {
      int r=n%10;
      if(r!=1&&r!=0)
       c++;
      n=n/10;
      }
  if(c>0)
  {
    printf("inavlid input");
    return 1;
  }
  int dec=btod(t);
  printf("the decimal number=%d",dec);
  return 0;
}
int btod(int bin)
{
  if(bin==0)
    return 0;
  else
    return(bin%10+btod(bin/10)*2);
}