#include<stdio.h>
#include<string.h>
main()
{
	char i[20],j[20];
	int a,b;
	
	printf("Enter String 1 :");
	gets(i);
	printf("Enter String 2 :");
	gets(j);
	
	for(a=0;i[a]!='\0';a++);
	
    for(b=0;j[b]!='\0';b++)
    {
    	i[a]=j[b];
    	a++;
	}
    j[a]='\0';
    printf("merge string is :%s",i);
	
}
