#include<stdio.h>
char main()
{
char i;
printf("enter the string");
scanf("%c",&i);
if(i==(0-9))
{
printf("%c is numeric",i);
}
else
{
printf("%d not numeric",i);
}
return 0;
}
