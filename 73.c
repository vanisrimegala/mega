#include<stdio.h>
int main()
{
int m,n,num,i,count=0;;
printf("enter the number \n");
scanf("%d",&num);
printf("Enter the two numbers \n");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
    if(num==i)
    {
        count=count+1;
    }
}
if(count==1)
{
        printf("%d present",num);
    }
 else
{
printf("%d not",num);
}
return 0;
}
