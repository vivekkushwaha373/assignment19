#include<stdio.h>
void read(char ptr[][10])//void read(char (*ptr)[10])
{
for(int i=0;i<5;i++)
{
    printf("%s ",ptr[i]);
}
}
int main()
{
    char arr[5][10]={"hello","verru","divya","piyush","zoya"};
    read(arr);

    return 0;
}