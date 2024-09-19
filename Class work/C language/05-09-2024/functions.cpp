#include<stdio.h>

add()
{
	int a,b;
	printf("Enter number ::");
	scanf("%d",&a);
	printf("Enter number ::");
	scanf("%d",&b);
	
	printf("Addition : %d",a+b);
}

main()
{
	add();  //call
	add();
}
