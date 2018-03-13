#include<stdio.h>
#include<math.h>
int main()
{
   int l,b,h,area,volume;
   printf("Enter length,breadth and height \n");
   scanf("%d%d%d",&l,&b,&h);
   area=2*l*b+2*b*h+2*l*h;
   volume=l*b*h;
   printf("the area: %d \n",area);
   printf("The volume: %d \n",volume);
   return 0;
}
