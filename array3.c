#include<stdio.h>
int main()
{
    int a[7],b[7],i,j;
    for(i=0;i<=7;i++)
    {
        printf("enter numbers(7)");
        scanf("%d", & a[i]);
        a[i]=b[i];
    }
    for(j=0;j<=7;j++)
    printf("%d", b[j]);
    return 0;
}