#include<stdio.h>
int apowern(int base,int power)
{ int ans =1;
    for(int i=1;i<=power;i++)
    {
ans=ans*base;
    }
    return ans;
}
int main()
{
    int a,n;
    printf("Enter base and exponent: ");
    scanf("%d%d",&a,&n);
    int ans=apowern(a,n);
    printf("%d^%d is: %d ",a,n,ans);
}