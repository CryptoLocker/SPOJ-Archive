#include<stdio.h>
int main()
{
    long long int ans[1001]={-1};
     int j;
    for(j=0;j<=1000;j++)
        ans[j]=-1;
    ans[0]=0;
    ans[1]=5;
    ans[2]=12;
    int flag=3;
 
    //for(j=0;j<=15;j++)
      //  printf("%lld ",ans[j]);
    while(1)
    {
        int x;
        scanf("%d",&x);
        if(x==0)
            break;
        else
        {
            if(ans[x]!=-1)
                printf("%lld\n",ans[x]);
            else
            {
                int i;
                for(i=flag;i<=x;i++)
                {
                    ans[i]=ans[i-1]+ans[i-1]-ans[i-2]+3;
                }
                flag=x;
                printf("%lld\n",ans[x]);
 
            }
 
        }
    }
 
    return 0;
}
