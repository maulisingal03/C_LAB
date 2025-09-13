//WAP to accept two numbers from the user and disply the squares of even numbers and cubes of odd no in that range?
#include<stdio.h>
int main(void)
{
    int n1,n2,square,cube;
    printf("enter first number =");
    scanf("%d",&n1);
    printf("enter second number =");
    scanf("%d",&n2);
    if(n1%2==0)
    {
        printf("number is even");
        for(n1;n1<=n2;n1++)
        {
            square=n1*n1;
            printf("%d",square);
        }
    }
    else 
    {
        printf("number is odd");
        for(n1;n1<=n2;n1++)
        {
            cube=n1*n1*n1;
            printf("%d" ,cube);
        }
    }
    return 0;
}