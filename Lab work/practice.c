//accept 5 number from user and find the factorial
#include<stdio.h>
main()
{
	int a[5],i,j,fact=1;
	
	for(i=1;i<=5;i++)
	{
	printf("Enter number :");
	scanf("%d",&a[i]);
    }
	for(i=1;i<=5;i++)
		{
		for(j=1;j<=a[i];i++)
	    	{
		       fact=fact*a[i];	
		    }
		    printf("factorial number is :%d",fact);
		}
	

}
