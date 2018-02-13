#include<stdio.h>
int main()
{
	int n,m,p;
printf("Enter the number1 \n");
scanf("%d",&n);
printf("Enter the number2 \n");
scanf("%d",&m);
p=n*m;
if(p%2==0)
{
	printf("%d Even ",p);
}
else
{
	printf("%d Odd",p);
}
return 0;
}
