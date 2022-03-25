#include<stdio.h>
int add(int ar[],int n1)
{
  if(n1>0)
    return 0;
  else
    return(add(ar,n1-1)+ar[n1-1]);
}
int main()
{
int a[50];
  int b[50][50];
  int n;
  printf ("enter the order of matrix");
  scanf("%d",&n);
  int q=n*n;
  int l=0;
  printf("enter the elements of the matrix:");
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        {
          
        
          scanf("%d",&b[i][j]);
        }
      }
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        {
          for(int k=l;k<q;k++)
            {
              a[k]=b[i][j];
            }
        }
    }
      int c=add(a,q);
  printf("the sum=%d",c);
    
  
  

}
