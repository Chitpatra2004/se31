#include<stdio.h>
main()
{

	int a,b,c;
	
	for(a=1;a<=5;a++) // row
	{
	   for(b=1;b<=5-a;b++)//space
       {
		    printf(" ");
       }
	   for(c=1;c<=a;c++)
	   {
	    	printf(" *");
       }
	
	   printf("\n");
    }  
    	int i,k,j;
	
	for(i=5;i>=1;i--) // row
	{
	   for(k=1;k<=5-i;k++)//space
       {
		    printf(" ");
       }
	   for(j=1;j<=i;j++)
	   {
	    	printf(" *");
       }
	
	   printf("\n");
    }  
	
}
