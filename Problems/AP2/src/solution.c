#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int x,y,z;
        scanf("%lld%lld%lld",&x,&y,&z);
        long long int n,a,d,i;
        n=(2*z)/(x+y);
        d=(y-x)/(n-5);
        a=x-(2*d);
        printf("%lld\n",n);
        printf("%lld ",a);
        for(i=1;i<n;i++)
        {
            a=a+d;
            printf("%lld ",a);
        }
        printf("\n");
 
    }
    return 0;
}
 