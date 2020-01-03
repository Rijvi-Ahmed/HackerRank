#include<stdio.h>
int main(){
int n, i,count=0;

    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
   // printf("%d", max);



for(i=0;i<n;i++){
        if(a[i]==max){
            count=count+1;
        }

    }
    printf("%d", count);
       return 0;
}

