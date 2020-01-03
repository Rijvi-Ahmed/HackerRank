#include<stdio.h>
int main(){
int n, i,sum=0;

    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int min=a[0],max=min;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }

    }

      for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        for(i=0;i<n;i++){
            sum=sum+a[i];
        }

        int max1=sum-min;
        int min1=sum-max;
        printf("%d %d", min1,max1);
    }

    }
