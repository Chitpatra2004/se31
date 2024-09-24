#include<stdio.h>
main()
{
	int n,sum=0;
	printf("Enter NUmber :");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	//n=5
	{
		sum=sum+i;
		//0=0+1;
		//1=1+2
		//3=3+3
		//6=6+4
		//10=10+5
		i=i+1;
	}
	printf("%d",sum);
}
