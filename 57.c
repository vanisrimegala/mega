#include <stdio.h>
int main()
{
	int t3,t4,temp;
	printf("Enter the numbers\n");
	scanf("%d%d",&t3,&t4);
	printf("%d \t %d \n",t3,t4);
	{
	temp=t3;
	t3=t4;
	t4=temp;
	}
	printf("%d\t%d\t",t3,t4);
	return 0;
}
