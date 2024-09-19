#include<stdio.h>
main()
{
	int n, sum=0; // intialize
 
	printf("Enter Number :");
	scanf("%d",&n);
	int i =1;
	//n=5
	  while(i<=n) // condition 
{
	sum=sum+i;
	//0=0+1
	//1=1+2
	//3=3+3
	//6=6+4
	//10=10+5
	//15
	i=i+1;
}
	printf("%d",sum);
	

	
}
