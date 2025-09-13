#include<stdio.h>
int main()
{
    int i,b[8],sum=0;
    printf("enter the numbers");
    for(i=0;i<8;i++)
    {
        scanf("%d",& b[i]);
        sum=sum+b[i];
    }
    printf("%d", sum);
return 0;
}
