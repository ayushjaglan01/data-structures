#include<stdio.h>
 void main()
{
    int i,n,a[10],ele;
    printf("enter no. of element of array\n");
    scanf("%d",&n);

    printf("enter the array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    for (i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("Your element is at %d th position and at %d th index",i+1,i);
        }
    }
}
