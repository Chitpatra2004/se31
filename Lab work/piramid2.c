#include<stdio.h>
main()
{
	int m,n,p;
	for(m=1;m<=5;m++)
	{
		for(n=1;n<=5-m;n++)
		{
			printf(" ");
		}
		for(p=1;p<=m;p++)
		{
			printf(" *");
		}
		printf("\n");
	}
	

	int a,b,c;
	for(a=5;a>=1;a--)
	{
		for(b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" *");
		}
		printf("\n");
	}
	

}

