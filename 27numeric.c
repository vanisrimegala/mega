#include<stdio.h>
#include<ctype.h>
int main()
{
char i,k;
printf("enter the string \t");
scanf("%c",&i);
for(k=0;k<=i;k++)
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
