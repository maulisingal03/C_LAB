#include<stdio.h>
int main()
{
    int i,j,n,k,count=0;
    printf("enter size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    printf("enter the elements");
    scanf("%d", &arr[n]);
    for(j=0;j<n;j++){
        for(k=0;k<n;k++){
            if(arr[j]!=arr[k]){
                printf("unique number: %d",arr[j]);
            }
        }
   }
   return 0;
    }



