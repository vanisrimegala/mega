#include<stdio.h>
int main()
{
    char s[100];
    printf("Input \n");
    scanf("%[^\n]s",s);
   if(printf("%s",s))
   return 0;
}
