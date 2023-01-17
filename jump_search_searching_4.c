#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a[10],ele;
    printf("enter no. of element of array\n");
    scanf("%d",&n);

    printf("enter the sorted array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    int s=0;
    int end=sqrt(n);

    while ( end<=n)
    {
            int c=0;
        if(ele>end)
        {
            s=end;
            end=end+sqrt(n);
        }
        else if (ele<=end&&ele>s)
        { 
            for(i=s;i<=end;i++)
            {
                if(a[i]==ele)
                {
                    printf("Element is found at %d position ",i+1);
                    c++;
                    break;
                }
                else
                {
                    printf("Element is not present in the array\n");
                }
            }
        }
            if(c==1)
            {
                break;
            }
    }
   return 0;
}
