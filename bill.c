#include<stdio.h>

int main()
{
    int n, bill=0;
    printf("enter number of calls :");
    scanf("%d",&n);
    if((n>=0) && (n<=75)){
        bill=0;
    }
    if((n>75) && (n<=200)){
        n=n-75;
        bill=n*1;
    }
    if((n>200)&&(n<=300)){
        n=n-200;
        bill=n*2+125;
    }
    if((n>300)&&(n<=400)){
        n=n-300;
        bill=n*3+225;
        }
        if((n>400)){
            n=n-400;
            bill=n*6-325;
        }
        printf("total bil: %d\n",bill);
        return 0;
    }
