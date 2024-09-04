#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter Number :: ");
	scanf("%d",&n);
	
	//7
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			//7%1= true
			//7%2 = false , 7%3, 7%4 ,7%6
			//7%7= true
			c++;
		}
	}
	if ( c==2)
	{
	  printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}
