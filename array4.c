#include<stdio.h>
int main()
{
    int i,j,n,k,count=0;
    printf("enter size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    printf("enter the number");
    scanf("%d", &arr[n]);
    for(k=0;k<n;k++){
        for(j=0;j<n;j++){
            if(arr[k]==arr[j]){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}