#include<stdio.h>
int main()
{
    int n,temp,flag;
    printf("Enter an integer number:\n ");
    scanf("%d",&n);
    temp=n;
    flag=0;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            flag=1;
            break;
        }
        temp=temp/2;
    }
    if(flag==0)
        printf("%d is a number that is the power of 2",n);
    else
        printf("%d is not the power of 2",n);
    return 0;
}
