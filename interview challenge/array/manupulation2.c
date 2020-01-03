#include<stdio.h>
#include<stdlib.h>


int main() {
    long long int n,k,i;
    long int max=0,x=0;
    scanf("%lld %lld",&n,&k);
    int *a=(int *)malloc(sizeof(int)*(n+1));
    if(a==NULL){
        printf("error");

    }
    for(i=0;i<n;i++){
      *(a+i)=0;
    }
    for(i=0;i<k;i++){
        int c,d,g;
        scanf("%d %d %d",&c,&d,&g);
        a[c]+=g;
        if(d+1<=n){
            a[d+1]-=g;
        }

    }
    for(i=1;i<=n;i++){
        x+=a[i];
        if(max<x){
            max=x;
        }
    }
    printf("%lld",max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
