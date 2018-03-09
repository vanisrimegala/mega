#include<stdio.h>
int main()
{
int num,i;
printf("Enter the number \n");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
  break;
}
}
  if(i>num/2)
printf("%d not",num);
else
printf("%d yes",num);
return 0;
}
