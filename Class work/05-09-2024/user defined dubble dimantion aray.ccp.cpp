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
}
