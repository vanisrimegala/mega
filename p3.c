#include<stdio.h>
int main()
{
   int n,temp,re,result=0;
   printf("Enter the number \n");
   scanf("%d",&n);
   temp=n;
   while(temp!='\0')
   {
       re=temp%10;
       result=result*10+re;
       temp=temp/10;
   }
   printf("reverse of the number is %d \n",result);
   return 0;
}
