#include<stdio.h>
int main() 
{
  int n,r,s;
  printf("Enter the numbers \n");
  scanf("%d%d",&n,&s);
 r=n*s;
  if(n==s)
  {
          printf("yes \n");
  }
  else
  {
      printf("not a perfect square");
  }
  return 0;
}
