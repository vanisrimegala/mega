#include<stdio.h>
 int main()
 {
  int count=0,n,t,temp;
printf("enter the integer \n");
scanf("%d",&n);
  temp=n;
  while(temp!=0)
  {
  	t=temp%10;
  	if(t!=0)
  	{
             count=count+1;
  	}
  	temp=temp/10;
   }
printf("%d",count);
return 0;
}
