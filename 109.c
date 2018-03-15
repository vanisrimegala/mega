#include<stdio.h>
void main()
{
int n,temp,i,j,a[20],min;
printf("enter the array of numbers \n");
scanf("%d",&n);
printf("enter the numbers \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
min=a[0];
printf("\n The minimum element is %d",min);
}
