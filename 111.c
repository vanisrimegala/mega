#include<stdio.h>
void main()
{
int n,count=0,temp,r;
printf("enter the number \n");
scanf("%d",&n);
temp=n;
while(temp!='\0')
{
    r=temp%10;
    if(r!='\0')
    {
        count=count+1;
    }
    temp=temp/10;
}

printf("\n %d",count);
}
