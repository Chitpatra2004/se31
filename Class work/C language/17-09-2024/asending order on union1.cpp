#include<stdio.h>
union func{
	int k[5],u,v,temp;
}a1,a2,a3,a4;



main()
{

	for(a2.u=0;a2.u<5;a2.u++){
	char c = a2.u;
	printf("Enter Number %d : ",a2.u + 1);
	scanf("%d",&a1.k[a2.u]);
	
	}
	
	
	for(a2.u=0;a2.u<5;a2.u++)
	{
		for(a3.v=a2.u+1;a3.v<5;a3.v++)
		{
			if(a1.k[a2.u]>a1.k[a3.v])
			{
				a4.temp=a1.k[a2.u];
				a1.k[a2.u]=a1.k[a3.v];
				a1.k[a3.v]=a4.temp;
			}
		}
	}
	for(a2.u=0;a2.u<5;a2.u++)
	{
		printf("\n%d",a1.k[a2.u]);
	}
}
