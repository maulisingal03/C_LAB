#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of elements");
    scanf("%d", &n);
    int rev[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &rev[i]);
    }
    printf("array in reverse order");
    for(i=n;i>=0;i--)
    {
        printf("%d", rev[i]);
    }
    return 0;
    
}