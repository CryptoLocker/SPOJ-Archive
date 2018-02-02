#include<stdio.h>
 
int main()
{
    while(1)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if((x==0 && y==0 ) && z==0)
            break;
        int d1,d2;
        d1=y-x;
        d2=z-y;
        if(d1 == d2)
        {
            printf("AP %d\n",z+d1);
        }
        else
            printf("GP %d\n",z*(z/y));
    }
    return 0;
}
 