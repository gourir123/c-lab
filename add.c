#include<stdio.h>
int main()
{
  int a[10][10];
  int b[10][10],c[10][10];
  int m,n;
  printf("enter the number of rows and colmuns:");
  scanf("%d%d",&m,&n);
  printf("enter the elements of 1st matrix");
  for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
      {
        scanf("%d",*(a+i)+j);
      }
    }
printf("enter the elemtents of 2nd matrix");
for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        scanf("%d",*(b+i)+j);
      }
  }
for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
      }
  }
for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
        printf("%d\t",*(*(c+i)+j));
      }
    printf("\n");
  }
return 0;
}