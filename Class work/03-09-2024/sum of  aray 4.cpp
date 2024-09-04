#include<stdio.h>
main()
{
    int a[5],b[5],c[5],i;

    for(i=0;i<5;i++)
    {
        printf("Enter Number A =");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Enter Number B ="); 
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
       c[i]=a[i]+b[i];
    }
    for(i=0;i<5;i++)
    {
     printf("\nEnter Number C = %d",c[i]);
    }
        

}
