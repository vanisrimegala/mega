#include<stdio.h>
int main()
{
int k,i;
char ch[100],s[100];
printf("Enter the string1 ");
scanf("%s",ch);
printf("%s \n",ch);
printf("Enter the string2 ");
scanf("%s",s);
printf("%s \n",s);
if(ch==s)
{
	printf("%s",s);
}

else if(ch[100]>s[100])
{
	printf("%s",ch);
}
else
{
	printf("%s",s);
}
  return 0;
}
