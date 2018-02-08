#include<stdio.h>
int main()
{
 int count=0,i;
 char str[20];
 printf("Enter string : ");
 scanf("%[^\n]s",str);
 for(i=0; str[i]!='\0'; i++)
 {
   if(str[i]=='.')
   {
    count=count+1;
   }
 }
 printf("\nNumber of lines in string : %d",count+1);
 return 0;
}
