#include<stdio.h>
int main()
{
int n,n1,result=0;
printf("Enter the number \n");
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
result=result+n1;
n=n/10;
}
printf("%d",result);
return 0;
}
