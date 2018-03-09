#include<stdio.h>
int main()
{
int n,a[100],i,p=1;
printf("Enter number \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
p=p*a[i];
}
printf("%d",p);
return 0;
}
