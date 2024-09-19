#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter number A :");
	scanf("%d",&a);
	
	printf("Enter number B :");
	scanf("%d",&b);
	
	printf("Enter number C : ");
	scanf("%d",&c);

  if (a>b)
    {
  	if (a>c)
	  {
        printf("%d is Greatest,a");
      }
    else
      {
 	    printf("%d is Greatest,c");
	  }	
    }
   else 
    {
 	if(b>c)
 	  {
        printf("%d is Greatest,b");
      }
    else
      {
        printf("%d is Greatest,c");
	  }
    }
}
