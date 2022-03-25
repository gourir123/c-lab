#include <stdio.h>
struct student
{
  char n[50];
  int m[6];
  float avg;
  int id;
};
int main()
{
  struct student s[50];
  int n;
  printf("enter the number of students:");
  scanf("%d",&n);
  printf("enter the details of the student:");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&s[i].id);
      scanf("%s",s[i].n);
      float sum=0;
      for(int j=0;j<6;j++)
        {
          scanf("%d",&s[i].m[j]);
          sum=sum+s[i].m[j];
        }
      s[i].avg=sum/6;
    }
  printf("the details of students who got less than average:");
  for(int i=0;i<n;i++)
    {
      if(s[i].avg>=35)
      {
        printf("name=%s,marks=%f\n",s[i].n,s[i].avg);
      }
      }
      printf("the details of students who got less than 35:");
      for(int i=0;i<n;i++)
        {
          if(s[i].avg<35)
          printf("name=%s,amrks=%f\n",s[i].n,s[i].avg) ;
        }
        return 0;
    }