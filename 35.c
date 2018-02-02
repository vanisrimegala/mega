#include<stdio.h>
#include<ctype.h>
 int main()
{

char ch[100];
printf("enter the string");
scanf("%s",ch);
if(isalnum(ch))
{
printf("%s",ch);
}return 0;
}
