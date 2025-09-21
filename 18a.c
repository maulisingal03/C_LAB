#include<stdio.h>
int main()
{
    int n,i,j,sum=0,product=1;
    printf("enter the size of the matrix");
    scanf("%d" ,&n);
    int a[n][n];
    printf("enter elements of matrix");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum=sum+a[i][n-1-i];
        product=product*a[i][n-1-i];
    }
    printf("sum of anti diagonal =%d\n", sum);
    printf("product of anti diagonal =%d\n", product);
    return 0;
}

    
            