#include<stdio.h>
fun1(int n) // parameters
	{
	     int fac=1,i;
		 for(i=1;i<=n;i++)
		 {
		 	fac=fac*i;
		 }
		 printf("%d",fac);
	}
	
	add(int n1,int n2)
	{
	printf("\nAddition :%d",n1+n2);	
	}
main()
{
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	fun1(n);  //arguments
	
	add(10,20);
}	

