#include<stdio.h>
int main()
{
 int count=0,i;
 char s[20];
 printf("Enter string : ");
 scanf("%[^\n]s",s);
 for(i=0; s[i]!='\0'; i++)
 {
   if(s[i]==' ')
   {
    count=count+1;
   }
 }
 printf("\nNumber of words in string : %d",count+1);
 return 0;
}
