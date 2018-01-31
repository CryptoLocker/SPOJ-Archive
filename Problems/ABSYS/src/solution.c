#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[50];
        char b[50];
        char c[50];
        char x,y;
        scanf("%s %c%s %c%s",a,&x,b,&y,c);
        int A,B,C;
        A=strlen(a);
        B=strlen(b);
        C=strlen(c);
        int flag;
        int i,j,k,p,q,r;
        for(i=0;i<A;i++)
        {
            if(a[i]=='m')
            {
                flag=1;
                break;
            }
        }
        for(j=0;j<B;j++)
        {
            if(b[j]=='m')
            {
                flag=2;
                break;
            }
        }
        for(k=0;k<C;k++)
        {
            if(c[k]=='m')
            {
                flag=3;
                break;
            }
        }
       // printf("%d flag\n",flag);
        double u;
        if(flag==1)
        {
            q=0;r=0;
            int s;
            u=0;
            for(s=B-1;s>=0;s--)
            {
                q=q+((b[s]-'0')*((int)(pow(10.0,u)+0.5)));
                u++;
            }
           // printf("%s\n",b);
            u=0;
           // u=1;
            //printf(" %lf\n",pow(10.0,u));
             for(s=C-1;s>=0;s--)
            {
                r=r+((c[s]-'0')*((int)(pow(10.0,u)+(0.5))));
                //printf("%d \n",(int)pow(10.0,u));
                u=u+1.0;
 
            }
 
            p=r-q;
            printf("%d + %d = %d\n",p,q,r);
        }
        else if(flag==2)
        {
            p=0;r=0;
            int s;
            u=0;
            for(s=A-1;s>=0;s--)
            {
                p=p+((a[s]-'0')*((int)(pow(10.0,u)+0.5)));
                u++;
            }
           // printf("%s\n",b);
            u=0;
           // u=1;
            //printf(" %lf\n",pow(10.0,u));
             for(s=C-1;s>=0;s--)
            {
                r=r+((c[s]-'0')*((int)(pow(10.0,u)+(0.5))));
                //printf("%d \n",(int)pow(10.0,u));
                u=u+1.0;
 
            }
 
            q=r-p;
            printf("%d + %d = %d\n",p,q,r);
 
        }
        else if(flag==3)
        {
            q=0;p=0;
            int s;
            u=0;
            for(s=A-1;s>=0;s--)
            {
                p=p+((a[s]-'0')*((int)(pow(10.0,u)+0.5)));
                u++;
            }
           // printf("%s\n",b);
            u=0;
           // u=1;
            //printf(" %lf\n",pow(10.0,u));
         //   printf("%d \n",q);
             for(s=B-1;s>=0;s--)
            {
                q=q+((b[s]-'0')*((int)(pow(10.0,u)+(0.5))));
 
                u=u+1.0;
 
            }
 
 
            r=p+q;
            printf("%d + %d = %d\n",p,q,r);
        }
 
 
    }
    return 0;
}
 