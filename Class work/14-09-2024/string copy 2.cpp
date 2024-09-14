#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	char b[20];
	
	printf("Enter Name  :");
	gets(a);
	
	strcpy(b,a);
	printf("string copy is :%s",b);
	
}

