#include<stdio.h>
main()
{
	int n;
	printf("Enter number n :");
	scanf("%d",&n);
	
	

	if(n==0)
	{
		printf("Number  is zero");
	
	}
	else if (n%2==0) // ladder if else
	{
		printf("number is even");
	}
	else
	{
		printf("Number is odd");
    }

}
