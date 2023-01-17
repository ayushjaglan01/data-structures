#include<stdio.h>
main()
{
    int i,n,a[10],e;
    printf("enter no. of element of array\n");
    scanf("%d",&n);

    printf("enter the array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&e);
    for (i=0;i<n;i++)
    {
        if(e==a[i])
        {
            printf("Your element is at %d th position and at %d th index",i+1,i);
        }
    }
}
