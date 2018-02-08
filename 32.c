#include <stdio.h>
int main()
{
	int count=0,i=0;
	char ch[100];
	printf("Enetr the string \n");
	scanf("%s",ch);
	while(ch[i]=='\0')
	{
	if(ch[i]==" ")
	{
count++;
	}
		i++;
	}
	
	printf("%d \n",count);
	
	return 0;
}
