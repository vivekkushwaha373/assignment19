#include<stdio.h>
int main()
{int count=0;
    char str[5][20];
    for(int i=0;i<5;i++)
    {
        printf("enter the %d string: ",i+1);
        gets(str[i]);
    }
   for(int i=0;i<5;i++)
   {
    for(int j=0;str[i][j]!='\0';j++)
     {if(str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U'||str[i][j]=='A'+32||str[i][j]=='E'+32||str[i][j]=='I'+32||str[i][j]=='O'+32||str[i][j]=='U'+32)
     {
        count++;
     }}
     printf("number of vowel in string %d is %d\n",i+1,count);
     count=0;
   }
    return 0;
}