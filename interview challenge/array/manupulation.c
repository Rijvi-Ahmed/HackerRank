#include<stdio.h>
#include<stdlib.h>


int main() {
    int N,K,p,q,sum,i,j,max=0,x=0;

    scanf("%d %d", &N,&K);
    int *a=(int *)malloc(sizeof(int)*(N+1));

    for(i=0;i<K;i++)
    {
        scanf("%d %d %d", &p,&q,&sum);
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    printf("%d", max);
    return 0;
}
