#include<stdio.h>
int strlength(char[]);
void strconcat(char[],char[]);
int strcomp(char[],char[]);
int main()
{
  char s[50];
  char s1[50],s2[50];
  char str1[50],str2[100];
  printf("enter a string to find the length:");
  gets(s);
  int l=strlength(s);
  printf("the length=%d",l);
  printf("enter 2 strings to concatenate:");
  gets(str1);
  gets(str2);
 strconcat(str1,str2);
  printf("the concatenated string:%s",str1);
  printf("enter the strings to be compared:");
  gets(s1);
    gets(s2);
  int c=strcomp(s1,s2);
  if(c==0)
  printf("both the strings are similar");
  else 
  if(c>0)
      printf("string 1 is greater then string 2");   
        else
        printf("string s1 is lesser then s2");
  return 0;
}
int strlength(char str[])
{
  int i;
  for( i=0;str[i]!='\0';i++);
  return i;
}
void strconcat(char src[],char des[])
{
  int i,j;
  for(i=0;src[i]!='\0';i++);
  for(j=0;des[j]!='\0';i++,j++)
    src[i]=des[j];
  src[i]='\0';
}
int strcomp(char st1[],char st2[])
{
  int i=0;
  for( i=0;st1[i]!='\0'&& st2[i]!='\0';i++)
    {
      if(st1[i]!=st2[i])
        return(st1[i]-st2[i]);
    }
  return(st1[i]-st2[i]);
}