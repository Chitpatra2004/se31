#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	
	printf("Enter string 1 : ");
	gets(a);
	printf("Enter string 2 : ");
	gets(b);
	
	printf("merge string is :%s",strcat(a,b));
}
