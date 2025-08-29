//WAP  to calculate the telephone bill of a customer after accepting no of calls from the user.
#include<stdio.h>
int main()
{
    int a,bill;
    printf("enter any no");
    scanf("%d",&a);
    printf("the no of calls %d",&a);
    if ((a>0)&&(a<=75))
    {
        bill=0;
    }
    if((a>75)&&(a<=200))
    {
        a=a-75;
        bill =a*1;
    }
    if((a>200)&&(a<=300))
    {
        a=a-200;
        bill=a*2;
        bill= bill+125;
    }
    printf("your bill for calls");
    return 0;
}