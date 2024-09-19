#include<stdio.h>
main()
{
	int ch,bill,bill1,bill2;
	printf("\n*******Welcome to our Resturant******\n");
	
	while(1)  //infinite loop
	{
		printf("\npress 1 for Dabeli -> 30rs");
	    printf("\npress 2 for Vadapav -> 50rs");
		printf("\npress 3 for Sandwhich -> 70rs");
		printf("\npress 4 for Bill");
		printf("\npress 5 for Exit");
		
		printf("\nEnter Your Choice :: ");
		scanf("%d",&ch);
		
		
		if(ch==1)
     {
     	printf("\n*******Welcome to Dabeli Section*****\n");
     	
     	int quan;
     	printf("\nEnter Quantity : ");
     	scanf("%d",&quan);
     	bill1=quan*30;
     	
	 }
	else if (ch==2)
	{
	    printf("\n*******Welcome to Vadapav Section*****\n");
     	
     	int quan1;
     	printf("\nEnter Quantity : ");
     	scanf("%d",&quan1);
     	bill1=quan1*50;
	}
	else if (ch==3)
	{
     	printf("\n*******Welcome to Sandwhich Section*****\n");
     	
     	int quan2;
     	printf("\nEnter Quantity : ");
     	scanf("%d",&quan2);
     	bill1=quan2*70;
     	
	}
	else if (ch==4)
	{
		int total=bill+bill1+bill2;
		
	    printf("\n*******Your Bill is : %d******\n",total);
	     break;
	     
	}
	else if(ch==5)
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
