#include<stdio.h>
#include<string.h>
//strcmp is the symble of string comparision 
main()
{
	char a[10];
	char b[10];
	int i,j;
	int c=0,d=0;
	
	printf("Enter String 1 : ");
	gets(a);
	printf("Enter String 2 : ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
        {
        c=c+a[i];
		}
    for(j=0;b[j]!='\0';j++)
    {
    	d=d+b[j];
	}
    printf("\nvalue of string is :%d",c);
    printf("\nvalue of string is :%d",d);

    if(c==d)
    {
    	printf("\nstring comparision is equal");
	}
	else if (c>d)
	{
		printf("\nstring 1  is greater");
	}
	else
	{
	printf("\nstring 2 is greater");
	}
	
	
}
