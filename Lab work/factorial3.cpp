#include<stdio.h>
main()
{
	int a,j=1,fac=1;
	printf("enter number :");
	scanf("%d",&a);
	while(j<=a)
	{
		fac=fac*j;
		j++;
	}
	printf("factorial is:%d",fac);
	
}

