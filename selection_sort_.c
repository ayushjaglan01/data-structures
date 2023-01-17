#include<stdio.h>
main()
{
    int i,n,a[10],ele,t,j,min ;
    printf("enter no. of element of array:\n");
    scanf("%d",&n);

    printf("enter the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for (i=0;i<n-1;i++)
     { min=i;
         for(j=i+1;j<n;j++)
         {
             if(a[min]>a[j])
             {
                 t=a[min];
                 a[min]=a[j];
                 a[j]=t;
             }
         }
     }
     printf("the sorted array is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}


