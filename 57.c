#include <stdio.h>
int main()
{
	int t1,t2,temp;
	printf("Enter the numbers\n");
	scanf("%d%d",&t1,&t2);
	printf("%d \t %d \n",t1,t2);
	{
	temp=t1;
	t1=t2;
	t2=temp;
	}
	printf("%d\t%d\t",t1,t2);
	return 0;
}
