    #include <stdio.h>
    int main()
    {
    char s1[100],s2[100];
    int i,c1=0,c2=0;
    printf("Enter the string1 \n");
    scanf("%[^\n]s",s1);
    printf("Enter string 2 \n");
    scanf("%[^\n]s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
    	c1=c1+1;
    }
    for(i=0;s2[i]!='\0';i++)
    {
    	c2=c2+1;
    }
    if(c1>c2)
    {
    	printf("%s",s1);
    }
    else if(c1==c2)
    {
    	printf("%s",s2);
    }
    else
    {
    	printf("%s",s2);
    }
    	return 0;
    }
     
