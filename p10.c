#include<stdio.h>
#include<string.h>
int main()
{
   int i,count=0,s2,s1;
   char s[100],a[100];
   printf("Enter the two string \n");
   scanf("%s%s",s,a);
   s2=strlen(s);
   s1=strlen(a);
   for(i=0;s[i]&&a[i]!='\0';i++)
   {
       if(s[i]==a[i])
       {
           count++;
       }
   }
   if(count==s1&&count==s2)
   {
       printf("yes \n");
   }
       else
       {
           printf("no");
       }
   return 0;
}
