#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ipaddress[16];
  int count=0,s=0;
  int num=255;
  printf("Enter the ip address: ");
  scanf("%s",ipaddress);
  for(int i=0;ipaddress[i]!='\0';i++)
  {
    if(ipaddress[i]!=',')
    {s=s*10+ipaddress[i]-'0';
    if(ipaddress[i+1]=='\0')
    {
      if(s>255)
      printf("Invalid ipadress");
      exit(0);
    }
    }
    
    
    else
    { 
  
      if(s>255)
      {
      printf("Invalid ip address");
      exit(0);
      }
      s=0;
      count++;
    }
  }
  if(count==3)
  printf("Valid ipaddress ");
  else
  printf("Invalid ipadress ");
  return 0;
}