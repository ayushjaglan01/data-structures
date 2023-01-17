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
    for(i=n-1;i>=0;i--)
    {
       end=i;
       for(j=i-1;j>=0;j--)
       {
           if(a[end]<a[j])
           {
               t=a[j];
               a[j]=a[end];
               a[end]=t;
           }
       }
    }
     printf("the sorted array is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}



