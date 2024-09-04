#include<stdio.h>
main()
{
	int i,j;
	
	printf("Enter number :");
	scanf("%d",&j);
	
	
	for(i=1;i<=j;i++)
	{
		printf("%d\n",i);
	     if(i==j/2)
	    {
		break;
     	}
     
	}
}
