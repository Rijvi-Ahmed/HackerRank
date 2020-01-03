#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int siz,n,i,key,j;
    cin>>siz>>n;
    int arr[siz];
    for(i=0;i<siz;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        key=arr[0];
        for(i=0;i<(siz-1);i++){

            arr[i]=arr[i+1];
        }
        arr[siz-1]=key;
        //n--;
    }
    for(i=0;i<siz;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
