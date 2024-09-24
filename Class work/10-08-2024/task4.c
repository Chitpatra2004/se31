#include<stdio.h>

int main()
{
	int a,b,temp; // pre-defined
	printf("Enter number 1:");
	scanf("%d",&b);
	//a=10,b=20
	temp=a; // temp =10,a=blank
	a=b;  //a=20,b=blank
	b=temp;
	printf("After swapping A:%d",a);
	printf("\nAfter swapping B:%d",b);
}
