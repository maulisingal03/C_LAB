#include<stdio.h>

int main()
{
    float i,sum=0;
    for(i=1;i<=10;i++)
    {
        sum = sum+1/i;
    }
    printf("the sum is=%f \n" ,sum);
    return 0;
}