#include<stdio.h>
int main()
{
    int n,temp,t,r=0;
    printf("Enter number \n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        t=temp%10;
        r=r*10+t;
        temp=temp/10;
    }
   printf("%d",r);
   return 0;
}
