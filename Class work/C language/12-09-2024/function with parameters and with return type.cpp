#include<stdio.h>
add(int n1,int n2)
{
	

	
	return n1+n2;
	
	
}

fac(int n)
{
	int i,fac=1;
	
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
 main()
{	
    int n1,n2;
    printf("Enter Number 1 :");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
    printf("\n%d",add(n1,n2));
    printf("\n%d",fac(n));
}
