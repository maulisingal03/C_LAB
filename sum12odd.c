#include<stdio.h>
int main()
{
    int i,num1,num2,c=0,sum=0;
    printf("enter num1");
    scanf("%d" , &num1);
    printf("enter num2");
    scanf("%d", &num2);
    for(i=num1;i<=num2;i++)
    {
        if((i%2!=0)&&(c<=12))
        {
            sum=sum+i;
            c=c+1;
        }
    }
    printf("%d" , sum);
    return 0;
}