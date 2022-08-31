#include<stdio.h>
#include<string.h>
int main()
{
    char ptr[20];
  char str[5][20];
  printf("enter 5 strings: \n");
  for(int i=0;i<5;i++)
  {
    gets(str[i]);
  }
  printf("enter a string you want to search : ");
  gets(ptr);
   for(int i=0;i<5;i++)
  {
    if(strcmp(str[i],ptr)==0)
    printf("string exits: its location in the list is %d",i+1);
  }
    return 0;
}