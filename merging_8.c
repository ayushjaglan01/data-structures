#include<stdio.h>
main()
{
    int i,n,a[10],b[10],c[20],m;
    printf("enter no. of element in first array\n");
    scanf("%d",&n);
    printf("enter no. of element in second array\n");
    scanf("%d",&m);
    printf("enter the  first array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the second array\n");
    for (i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
     for(i=0;i<m;i++)
    {
        c[n+i]=b[i];
    }

    printf("your merged array is\n ");
    for (i=0;i<m+n;i++)
    {
        printf("%d\n",c[i]);
    }
}
