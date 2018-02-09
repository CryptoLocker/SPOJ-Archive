#include<stdio.h>
 
int main()
{
    while(1)
    {
        int n,i,f;
        scanf("%d",&n);
        if(n==-1)
            break;
        int arr[n];
        int count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            count=count+arr[i];
        }
        if(count%n==0)
        {
            f=count/n;
            int ans=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]<f)
                {
                    ans=ans+f-arr[i];
                }
            }
            printf("%d\n",ans);
 
        }
        else
            printf("-1\n");
 
    }
    return 0;
}
 