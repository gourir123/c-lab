#include<stdio.h>
  int main()
  {
  int n1,n2,result;
  char op;
  printf("enter an operator");
  scanf("%c",&op);
  printf("enter two integers:");
  scanf("%d%d",&n1,&n2);
  if(op=='+')
  {
    result=n1+n2;
  }
  else if(op=='-')
  {
    result=n1-n2;

  }
  else if(op=='*')
  {
    result=n1*n2;
  }
  else if(op=='/')
  {
    if(n2==0)
    {
      printf("Divide by zero error\n");
      return 1;
    }
    else
    {
      result=n1/n2;
    }
    }
    else if(op=='%')
    {
      if(n2==0)
      {
        printf("division by zero error\n");
        return 1;


      }
      else
      {
        result=n1%n2;
      
      }
    }
    else{
      printf("invalid opertaor\n");
      return 2;
    }
  printf("%d%c%d=%d\n",n1,op,n2,result);
  return 0;
  }
