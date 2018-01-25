#include<stdio.h>
int main()
{
int a[100],i,temp,j;
printf("the array elements are \n");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<5;i++)
{
printf("%d \n",a[i]);
}
printf("%d",a[i/2]);
}
return 0;
}
