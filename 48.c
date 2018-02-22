#include<stdio.h>
int main()
{
    int n,avg,a[100],sum=0,i;
    printf("Enter an integer number:\n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   avg=sum/n;
        printf("%d",avg);
    return 0;
}
