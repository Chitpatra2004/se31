#include<stdio.h>
main()
{
	int a;
	int i=1;
	printf("Enter Number : ");
	scanf("%d",&a);
	while(i<=a)
	{
		printf("%d\n",a);
		a=a-1;
	}
}
