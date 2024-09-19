#include<stdio.h>
main()
{
    int i,j;
    
    

    int a[2][3];
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    int b[2][3];
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number:");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }    
    printf("\n");

    int c[i][j];

   for(i=0;i<2;i++)
   {
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
    }printf("\n");
   }


}
