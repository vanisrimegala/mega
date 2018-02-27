#include<stdio.h>
int main()
{
 int m,n,d;
 printf("Enter number : ");
 scanf("%d%d",&m,&n);
 d=m-n;
   if(d%2==0)
   {
    printf("\n Even");
   }
   else
   {
       printf("\n odd");
   }
 return 0;
}
