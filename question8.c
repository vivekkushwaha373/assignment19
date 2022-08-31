#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
    int w1,w2,count=0;
    char arr[][10]={"hello","shilpa","hello","ayush","hello"};
    char word1[10];
    char word2[10];
    printf("enter the first word: ");
    gets(word1);
    printf("enter the second word: ");
    gets(word2);
    for(int i=0;i<5;i++)
    {
       if(strcmp(arr[i],word1)==0)
       w1=i;
    }
     for(int i=0;i<5;i++)
    {
       if(strcmp(arr[i],word2)==0)
       w2=i;
    }
    for(int i=0;i<5;i++)
    {int y=w1>w2?w1:w2;
    int z=w1>w2?w2:w1;
    
      for(int j=z+1;j<y;j++)
      {  if(i>y)
         {
            if(strcmp(arr[i],arr[j])==0)
            {count++;}
         
         }
      }
    }
    printf("%d\n",count);
    printf("difference: %d",abs(w1-w2)-1-count);
    return 0;
}