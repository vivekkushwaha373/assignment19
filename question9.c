#include<stdio.h>
#include<string.h>
int factorial(int );
int main()
{
    int count=0;
    char str[5][20]={"vivek1","zainab453","ayush21","zeba23","zoya765"};
    char ptr[20];
    int num;
    printf("enter the username: ");
    gets(ptr);
    for(int i=0;i<5;i++)
    {
        if(strcmp(ptr,str[i])==0)
        count++;
    }
    if(count!=0)
    {
    printf("enter the number you want to calculate factorial: ");
    scanf("%d",&num);
    printf("the factorial of %d is: %d",num,factorial(num));
    }
    else
    {
        printf("error");
    }
    return 0;
}

int factorial(int num)
{
    int k=1;
    for(int t=1;t<=num;t++)
    {
        k=k*t;
    }
    return k;
}