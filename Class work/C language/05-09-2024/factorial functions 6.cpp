#include<stdio.h>

fact()
{
    int i,n,sum=1;

    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	sum=sum*i;
	}
	printf("%d",sum);
}

main()
{
    fact();
}
