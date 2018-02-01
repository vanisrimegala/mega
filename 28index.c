#include<stdio.h>
int main()
{
int n,a[10],i;
printf("Enter the number ");
scanf("%d",&n);
printf("%d \n",n);
printf("The array elements are \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
printf("%d  %d \n",i,a[i]);
}
return 0;
}
