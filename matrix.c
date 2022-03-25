#include<stdio.h>
int main()
{
  int m,n,p,q,a[50][50],b[50][50];
  printf("enter the order of matrix A:");
  scanf("%d%d",&m,&n);
  printf("enter the order of matrix B:");
  scanf("%d%d",&p,&q);
  if(n!=p)
  {
    printf("matrix multiplication is not possible");
    return 1;
  }
  printf("enter the elements of matrix A:");
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  printf("enter the elements of matrix B:");
  for(int i=0;i<p;i++)
    {
      for(int j=0;j<q;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
  int c[50][50];
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<q;j++)
            {
               c[i][j]=0;
              for(int k=0;k<n;k++)
                {
                  c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
    }
  printf("the multiplied matrix:\n");
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<q;j++)
        {
          printf("%d",c[i][j]);
        }
      printf("\n");
    }
  return 0;
}