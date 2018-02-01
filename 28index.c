#include<stdio.h>
int main()
{
int n,a[10],i;
printf("Enter the number \n");
scanf("%d",&n);
printf("The array elements are \n");
for(i=0;i<n;i++)
{
printf("%d  %d",i,a[i]);
}
return 0;
}
