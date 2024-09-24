#include<stdio.h>
int main ()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
   int result =fac(n);
   printf("%d",result);
   return 0;	
}
int fac(int k)
{
	if (k>1)
	{
		return k*fac(k-1);
	}
	else
	{
		return 1;
	}
}
