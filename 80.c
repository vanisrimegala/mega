#include<stdio.h>
int main() 
{
  int n,temp,r;
  printf("Enter the number \n");
  scanf("%d",&n);
  temp=n;
  while(temp!=0)
  {
      r=temp%10;
      temp=temp/10;
      if(r%2!=0)
      {
          printf("%d \t",r);
      }
  }
  return 0;
}
