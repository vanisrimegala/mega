#include<stdio.h>
#include<ctype.h>
int main()
{
char i;
scanf("%c",&i);
{
if(isdigit(i))
{
printf("%c is numeric \n",i);
}
else
{
printf("%c not numeric \n",i);
}
}
return 0;
}
