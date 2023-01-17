#include <stdio.h>
int main()
{
    int i, n, a[15], e, mid1, mid2;
    printf("enter no. of element of array\n");
    scanf("%d", &n);

    printf("enter the sorted array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d", &e);
    int start = 0;
    int end = n - 1;

    if (start <= end)
    {
        mid1 = (start + (end - start) / 3);
        mid2 = (end - (end - start) / 3);
        if (e > mid1)
        {
            start = mid1 + 1;
        }
        else if (e <a[mid1])
        {
            end = mid1 - 1;
        }
        else if (e <a[mid2])
        {
            end = mid2 - 1;
        }
        else if (e > a[mid2])
        {
            start = mid2 + 1;
        }
        else if (e == a[mid1])
        {
            printf("Element found at %d index", mid1);
        }
        else if (e == a[mid2])
        {
            printf("Element found at %d index", mid2);
        }
        else
            printf("not found!!!!");
    }
}
