#include<stdio.h>
int main()
{
int number,i;
printf("Enter the number");
scanf("%d",&number);
for(i=2;i<=number/2;i++)
{
if(number%i==0)
{
  break;
}
}
  if(i>number/2)
printf("%d is not",number);
else
printf("%d is composite",number);
return 0;
}
