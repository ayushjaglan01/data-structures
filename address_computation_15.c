#include<stdio.h>
main()
{
    int i,j,k,m,n,o,a[10][10][10],ele,*p,*ad,row,col,slice;
    printf("Enter the number of  slices and rows and coloumn of the 3d matrix\n");
    scanf("%d%d%d",&o,&m,&n);
    printf("Enter the 3d matrix\n");
    for(i=0;i<o;i++)
    {
        for(j=1;j<=m;j++)
        {
            for(k=1;k<=n;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("Enter the element whose address is to be found\n");
    scanf("%d",&ele);
    for(i=1;i<=o;i++)
    {
        for(j=1;j<=m;j++)
        {
            for(k=1;k<=n;k++)
            {
               if(ele==a[i][j][k])
               {
                   printf("Your element is present in %d slice %d row %d coloum\n",i+1,j,k);
                   slice=i;
                   row=j;
                   col=k;

               }
            }
        }
    }
    p=&a[0][1][1];
    printf("address of your 1st element is %u",p);
    ad=p+(((m*n*slice)+row*n+col)*sizeof(int));
     printf("\n address of your required element is %u",ad);
}
