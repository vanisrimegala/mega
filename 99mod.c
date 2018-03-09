#include<stdio.h>
int main()
{
int a,b,c,mul,mod;
printf("Enter values \n");
scanf("%d%d%d",&a,&b,&c);
mul=a*b;
mod=mul%c;
printf("%d",mod);
return 0;
}
