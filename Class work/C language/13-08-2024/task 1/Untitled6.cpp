#include<stdio.h>
main()
{
	int a;
	printf("Enter year ::");
	scanf("%d",&a);
	if(a<2024)
	{
	printf("old year");
	}
	else if(a=2024)
    {
	printf("recent year");
    }
    else if (a>2024)
    {
    printf("future year");
    }  
    else
    {
    	printf("invalid your");
	}
	
}
