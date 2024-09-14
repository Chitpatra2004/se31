#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	char b[20];
	int i;
	
	printf("Enter Name  :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
	b[i]=a[i];
	}
    b[i]='\0';
	printf("string copy is :%s",b);
	
}

