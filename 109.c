#include<stdio.h>
void main()
{
int temp,i,j,a[10],min;
printf("enter the numbers \n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<=10;j++)
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
