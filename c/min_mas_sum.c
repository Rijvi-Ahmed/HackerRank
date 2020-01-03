#include<stdio.h>
int main(){
int n, i,sum=0,sum1=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++){
            for(int j=0;j<n-1;j++)
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

    }
    for(i=0;i<n-1;i++){
        sum=sum+a[i];
    }
    for(i=1;i<n;i++){
        sum1=sum1+a[i];
    }
    printf("%d %d", sum,sum1);
    return 0;












}
