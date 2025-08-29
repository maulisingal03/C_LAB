//WAP to calculate simple intrest except principle and time from user and rate is fixed to 8%.
#include<stdio.h>
int main()
{
    int SI,P,T,R;
    printf("enter value of P");
    scanf("%d",&P);
    printf("enter value of T");
    scanf("%d",&T);
    SI=P*R*T/100;
    printf("enter value of SI");
    return 0;
}