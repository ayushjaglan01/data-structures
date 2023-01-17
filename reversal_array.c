#include<stdio.h>
main()
{
    int i,n,a[10],e,t;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for (i=0;i<=(n/2);i++)
   {
       t=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=t;

   }
   printf("Reversed array is\n");
   for (i=0;i<n;i++)
    {   printf("%d\n",a[i]);

   }

}


