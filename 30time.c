#include<stdio.h>
int main()
{
int m,time,time2,m2,sub,sub1;
printf("Enter the time and minutes ");
scanf("%d%d",&time,&m);
printf("%d  %d \n",time,m);
printf("Enter the time and minutes ");
scanf("%d%d",&time2,&m2);
printf("%d  %d \n",time2,m2);
sub=time-time2;
sub1=m-m2;
printf("%d  %d \n",sub,sub1);
return 0;
}
