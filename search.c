#include <stdio.h>
int main()
{
  int a[50];
  int n;
  printf("enter the number of elements:");
  scanf("%d",&n);
  printf("enter the elements of the array:");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
          int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
          }
        
        }
    }
  printf("the array in ascending order\n");
  for(int i=0;i<n;i++)
    {
      printf("%d",a[i]);
    }
  
  int key;
  printf("enter the key element to be found");
  scanf("%d",&key);
  int low=0;
  int up=n-1;
  int mid;
  while(low<=up)
    {
       mid=(low+up)/2;
      if(key==a[mid])
      {
        printf("the key element %d is found at %d",key,mid);
        return 1;
      }
      else
        if(key<a[mid])
        {
          up=mid-1;
          }
      else
        {
          low=mid+1;
    }
      }
  printf("the element is not found" );
  return 0;
  
}