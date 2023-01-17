#include<stdio.h>
 int main()
{
    int i,n,a[10],e;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if (a[i+1]-a[i]==1)
        {
            continue ;
        }
        else
            {
                printf("Missing number found and it is %d \n",a[i]+1);

            }
    }
 return 0;
}


