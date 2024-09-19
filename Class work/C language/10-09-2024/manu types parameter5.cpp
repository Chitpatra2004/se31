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
asc()
{
	int a[5],i,n,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter number :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
for(i=0;i<5;i++)

   {
      printf("\nAsc : %d",a[i]);	
   }	
}

main()
{
	while(1) //infinite loop
	{
		printf("\npress 1 for factorial");
		printf("\npress 2 for Addition");
		printf("\npress 3 for array Asc");
		printf("\npress 4 for Exit");
		
		int ch;
		printf("\nEnter  Choice :");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			int n1;
			printf("Enter Number :");
			scanf("%d",&n1);
		
		  fun1(n1); //arguements
		
		}
		else if(ch==2)
		{
			int a,b;
		printf("Enter Number :");
		scanf("%d",&a);
		printf("Enter Number 2 :");
		scanf("%d",&b);
		
		add(a,b);
		}
	else if(ch==3)
	{
		asc();
	}
	else if(ch==4)
	{
		printf("\nThank you!!");
		break;
	}
	else
	{
		printf("\ninvalid choice");
		break;
	}	
}

}
