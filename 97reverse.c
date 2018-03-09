#include<stdio.h>
int main()
{
int n,rem,rev=0,temp;
printf("Enter an integer \n");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
printf("%d",rev);
return 0;
}
