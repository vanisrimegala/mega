#include<stdio.h>
int main()
{
    char s[10];
    int n,i;
   printf("the string is \n");
   scanf("%s",s);
   printf("Enter the number \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("%c",s[i]);
   }
   return 0;
}


