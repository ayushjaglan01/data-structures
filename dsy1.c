#include<stdio.h>
main()
{   int n,i,m,a[10],b[10],c[10];
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter m\n");
    scanf("%d",&m);
    printf("enter first array\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("enter second array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<m;i++)
    { if (c[i]==b[i])
    {
        continue;
    }
        c[n+i]=b[i];

    }
    printf("merged array\n");
    for(i=0;i<m+n;i++)
    {
        printf("%d\n",c[i]);
    }
    for(i=0;i<n;i++)
    {

    }


    }
