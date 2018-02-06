#include <stdio.h>

int main()
{
	int count=0,i,w=0;;
	char ch[100];
	printf("Enetr the string \n");
	scanf("%s",ch);
	for(i=0;ch[i]!=NULL;i++)
	{
	
	if(ch[i]==' ')
	{
	w=w+1;	
	}
	}
	
	printf("%d \n",count);
	printf("%d",w+1);
	return 0;
}
