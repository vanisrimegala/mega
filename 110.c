#include<stdio.h>
#include<math.h>
int main()
{
   int k,i,sum=0;
   printf("Enter value \n");
   scanf("%d",&k);
   for(i=0;i<=k;i++)
   {
       sum=sum+i;
   }
  printf("%d",sum);
   return 0;
}
