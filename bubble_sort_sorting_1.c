#include<stdio.h>
 int main()
{
    int i,n,a[10],ele,t;
    printf("enter no. of element of array:\n");
    scanf("%d",&n);

    printf("enter the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;

        }
    }
    }
     printf("the sorted array (using bubble sort ) is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;4444
}

