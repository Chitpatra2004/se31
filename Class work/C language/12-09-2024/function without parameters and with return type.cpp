#include<stdio.h>
add()
{
	int n1,n2;
	printf("Enter Number 1 :");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	
	return n1+n2;
	
	
}
fac()
{
	int i,fac=1,n;
	printf("Enter Number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
 main()
{
   printf("%d",add());
  printf("%d",fac());
}
