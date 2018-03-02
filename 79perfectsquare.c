#include<stdio.h>
int main() 
{
  int n,r,s,i,count=0;;
  printf("Enter the numbers \n");
  scanf("%d%d",&n,&s);
 r=n*s;
for(i=n;i<=s;i++)
{
    if(r==i*i)
    {
          count=count+1;;
    }
}
if(count==1)
{
    printf("Yes \n");
}
else
{
    printf("No");
}
  return 0;
}

