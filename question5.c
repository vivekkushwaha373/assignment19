#include<stdio.h>
int main()
{int count=0;
char str[10][20];
printf("enter the email address: \n");
for(int i=0;i<10;i++)
{
    gets(str[i]);
}
for(int i=0;i<10;i++)
{
    
    for(int j=0;str[i][j]!='\0';j++)
    {
     if(str[i][j]=='@')
     count++;
    }
    if(count==0)
    printf("Email address %d doesn't contain @\n",i+1);
    count=0;
}

}