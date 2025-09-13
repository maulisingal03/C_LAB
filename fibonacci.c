#include<stdio.h>
int main()
{
    int n,n1,n2,n3;
    printf("enter the number to check in fibonacci series");
    scanf("%d",&n);
    n1 =0;
    n2 =0;
    printf("%d",n1);
    printf("%d",n2);
    for(i=1;i<=13;i++)
    {
        n3=n1+n2;
        printf("%d",&n3);
        if(n3==n){
            printf("%d" present in the series);
            break;
            else{
                n1=n2;
                n2=n3;
            }
        }
        return 0;
    }
    
    
        
                 
    return 0;

}
