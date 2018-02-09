#include<stdio.h>
 int main()
 {
char ch[100];
  int count=0,i;
printf("enter the string \n");
scanf("%[^\n]s",ch);
  for(i=0;ch[i]!='\0';i++)
  {
   if(!((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')||(ch[i]==' ')||(ch[i]=='.')))
   {
    count=count+1;
   }
  }
printf("%d",count);
return 0;
}
