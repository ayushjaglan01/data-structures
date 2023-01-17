#include<stdio.h>
main()
{
    int i,n,a[10],ele,s,end;
    printf("enter no. of element of array\n");
    scanf("%d",&n);

    printf("enter the sorted array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
     int t=((ele-a[0])/(a[n-1]-a[0]))*(n-1);
   //int  t=n+2;
   printf(" value of t is:%d\n",t);
   if (a[t]==ele)
   {
       printf(" element found it is at %d position:",t+1);

   }
   else
   {
       printf("Element not found!!\n Enter the right element to be searched!!");
   }

}
