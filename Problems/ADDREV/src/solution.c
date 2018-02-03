#include<stdio.h>
 
int reverseDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int a,b;
      scanf("%d%d",&a,&b);
      int x = reverseDigits(a);
      int y = reverseDigits(b);
      x=x+y;
      int z = reverseDigits(x);
      printf("%d\n",z);
    }
    return 0;
}