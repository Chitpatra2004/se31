#include<stdio.h>
main()
{
	int ch,bill,bill1,bill2,bill3;
	printf("\n*******Welcome to our Resturant******\n");
	
	while(1)  //infinite loop
	{
		printf("\npress 1 for Pizza -> 180rs");
	    printf("\npress 2 for Burger -> 100rs");
		printf("\npress 3 for Dosa -> 120rs");
		printf("\npress 4 for Idli -> 50rs");
		printf("\npress 5 for Bill");
		printf("\npress 6 for Exit");
		
		printf("\nEnter Your Choice :: ");
		scanf("%d",&ch);
		
		
		if(ch==1)
     {
     	printf("\n*******Welcome to Pizza Section*****\n");
     	
     	int quan=0;
     	printf("\nEnter Quantity : ");
     	scanf("%d",&quan);
     	bill=quan*180;
     	
	 }
	else if (ch==2)
	{
	    printf("\n*******Welcome to Burger Section*****\n");
     	
     	int quan1=0;
     	printf("\nEnter Quantity : ");
     	scanf("%d",&quan1);
     	bill1=quan1*100;
	}
	else if (ch==3)
	{
     	printf("\n*******Welcome to Dosa Section*****\n");
     	
     	int quan2;
     	printf("\nEnter Quantity : ");
     	scanf("%d",&quan2);
     	bill2=quan2*120;
     	
	}
	else if (ch==4)
	{
     	printf("\n*******Welcome to Idli Section*****\n");
     	
     	int quan3;
     	printf("\nEnter Quantity : ");
     	scanf("%d",&quan3);
     	bill3=quan3*50;
     	
	}
	else if (ch==5)
	{
		int total=bill+bill1+bill2+bill3;
		
	    printf("\n*******Your Bill is : %d******\n",total);
	     break;
	     
	}
	else if(ch==6)
	{
		printf("\nThank You !!");
		break;
	}	
	else
	{
		printf("Invalid Choice !!");
		break;
	}
}
	
	
	
	
}
