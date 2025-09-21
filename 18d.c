#include<stdio.h>
int main()
{
    int n,i,a1[n],a2[n],sum[n];
    printf("enter size of array1: ");
    scanf("%d", &n);
    printf("enter size of array2: ");
    scanf("%d", &n);
    printf("enter elements of array 1:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a1[i]);
    }
    printf("enter elememts of array 2:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a2[i]);
    }
    for(i=0;i<n;i++){
        sum[i]=a1[i]+a2[i];
    }
    printf("sum of two arrays:\n");
    for(i=0;i<n;i++){
        printf("%d", sum[i]);
    }
    return 0;
}