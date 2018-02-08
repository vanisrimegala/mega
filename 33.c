#include<stdio.h>
int main()
{
 int count=0,i;
 char str[20];
 printf("Enter string : ");
 scanf("%[^\n]s",str);
 for(i=0; str[i]!='\0'; i++)
 {
   if(str[i]==' ')
   {
    count=count+1;
   }
 }
 printf("\nNumber of spaces in string : %d",count);
 return 0;
}
