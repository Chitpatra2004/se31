#include<stdio.h>
main()
{
	int j,k,l;
	printf("Enter number 1:  ");
	scanf("%d",&j);
	printf("Enter number 2:  ");
	scanf("%d",&k);
	printf("Enter number 3:  ");
	scanf("%d",&l);
	
	if(j>k)
	{
		if(j>l)
		{
			printf("%d is greatest",j);
		}
		else
		{
			printf("%d is greatest",l);
		}
	}
	else
	{
		if(k>l)
		{
			printf("%d is greatest",k);
		}
		else
		{
			printf("%d is greatest",l);
		}
	}
	
}
