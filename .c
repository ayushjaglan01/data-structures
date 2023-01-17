#include<stdio.h>
main()
{
    int i,n,a[10],e,mid;
    printf("enter no. of element of array\n");
    scanf("%d",&n);

    printf("enter the sorted array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&e);
    int start=0;
    int end =n-1;

    while  (start<end)
    {
        mid=(start+end)/2;
        if(a[mid]<e)
        {  start = mid+1;

        }
        else if (a[mid]==e)
        {
          printf("Element founded it is at %d position\n",mid+1);
          break;
        }
        else if(a[mid]>e)
        {
           end=mid-1;
        }
        else
            printf("not found!!!!");
    }

}
