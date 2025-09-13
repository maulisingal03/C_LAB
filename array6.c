#include<stdio.h>
int main()
{
    int i,n,j,l,max,min;
    printf("enter size of an array");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
    printf("enter elements");
    scanf("%d", &arr[i]);
    }
    for(j=0;j<n;j++){
        for(l=j+1;l<n;l++){
            if(arr[j]>arr[l]){
                printf("the max no: %d" , arr[i]);
                if(arr[j]<arr[l]){
                    printf("the min no: %d", arr[j]);
                }
            }
        }
        return 0;
    }

}