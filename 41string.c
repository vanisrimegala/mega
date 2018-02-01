#include<stdio.h>
int main()
{
int k,i;
char ch[100];
printf("Enter the number of times ");
scanf("%d",&k);
printf("%d \n",k);
printf("Enter the string ");
scanf("%s",ch);
printf("%s \n",ch);
for(i=1;i<=k;i++)
{
printf("%s \n",ch);
}
  return 0;
}
