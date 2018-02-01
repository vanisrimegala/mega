#include<stdio.h>
int main()
{
int m,time,min;
printf("Enter the minutes ");
scanf("%d",&m);
printf("%d \n",m);
time=m/60;
min=m%60;
printf("%d hours %d minutes \n",time,min);
return 0;
}
