#include<stdio.h>
main()
{
	int n,i=1,fac=1;
		
	printf("Enter number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
		printf("factorial no : %d",fac);
		
	
}
