#include<stdio.h>
int main()
{
    int n,a[100],sum=0,i;
    printf("Enter number \n");
    scanf("%d",&n);
   for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
   return 0;
}
