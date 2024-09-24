#include<stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
   int result=fact(n);
   printf("%d",result);
   return 0;	
}
int fact(int k)
{
	if (k>1)
	{
		return k*fact(k-1);
	}
	else
	{
		return 1;
	}
}
