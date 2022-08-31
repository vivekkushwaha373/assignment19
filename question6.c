#include<stdio.h>
#include<string.h>
void palindrome(char str[],int p)
{
    char ptr[20];
    int i,count1=0;
    for( i=0;str[i]!='\0';i++)
    {
        ptr[i]=str[i];
    }
    ptr[i]='\0';
    for(int count=i-1;count>=0;count--)
    {
        str[count1]=ptr[count];
        count1++;
    }
    if(strcmp(str,ptr)==0)
    printf("string %d is palindome\n",p);
}
int main()
{
    char str[10][20];
    printf("enter 10 strigs: \n");
    for(int i=0;i<10;i++)
    {
        gets(str[i]);
    }
     for(int i=0;i<10;i++)
    {
        palindrome(str[i],i+1);
    }
    return 0;
}