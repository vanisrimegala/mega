#include<stdio.h>
#include<math.h>
int main()
{
   int n,k,a[10],i,t;
   printf("Enter n and k values \n");
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   t=k;
   for(i=0;i<n;i++)
   {
    if(i==t-1)
    {
        printf("%d",a[i]);
    }
   }
   return 0;
}
