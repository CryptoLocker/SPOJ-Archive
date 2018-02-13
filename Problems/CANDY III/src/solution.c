#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int i,n,sum,x;
        sum=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x);
            sum+=x;
            sum=sum%n;
        }
        if(sum%n==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}