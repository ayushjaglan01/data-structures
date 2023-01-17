#include<stdio.h>
main()
{
    int i,n,a[10],ele,t,j,end ;
    printf("enter no. of element of array:\n");
    scanf("%d",&n);

    printf("enter the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     printf("the sorted array is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}



