#include<stdio.h>
#include<string.h>
void swap(char [],char []);
void swap(char str[],char ptr[])
{
char p[20];
strcpy(p,str);
strcpy(str,ptr);
strcpy(ptr,p);

}
int main()
{
    char str[10][20];
    for(int i=0;i<10;i++)
    {
        printf("enter the name of city %d: ",i+1);
        gets(str[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(str[i],str[j])>0)
            swap(str[i],str[j]);
        }
    }
    printf("name of cities has been sorted : \n");
     for(int i=0;i<10;i++)
    {
        
        printf("%s ",str[i]);
    } 

    return 0;
}