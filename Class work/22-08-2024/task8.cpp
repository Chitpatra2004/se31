#include<stdio.h>
main()
{

	int i,k,j;
	
	for(i=1;i<=5-i;i++) // row
	{
	for(k=1;k<=i;k++)//colum
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	
		printf("\n");
    }  
	
}
