#include<stdio.h>
int main(void)
{
    int i ,j;
    printf("enter numbers between 1 to 20");
    for(i=2;i<=20;i++)
    {
        int prime = 1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                prime=0;
                if(prime)
                printf("%d" ,&i);
    }
    return 0;
}
}

