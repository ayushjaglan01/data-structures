#include<stdio.h>
main()
{
    int a[10][10],c[10][10],m,n;
    printf("Enter the row and coloum of first matrix \n");
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         c[j][i]=a[i][j];

        }

    }
    printf("Transposed matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         printf("%d\t",c[i][j]);

        }
        printf("\n");
    }
}


