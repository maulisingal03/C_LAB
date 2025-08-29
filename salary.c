#include<stdio.h>

int main()
{
    int bp,incentive,hra,da;
    printf("enter the basic salary");
    scanf("%d",& bp);
    printf("enter incentive");
    scanf("%d",& incentive);
    hra=bp*30/100;
    da=bp*20/100;
    int gross=hra+da+incentive+bp;
    int net=gross-14000-10/100*bp;
    printf("%d \n",gross);
    printf("%d \n",net);
    return 0;
}