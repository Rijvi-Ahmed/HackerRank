#include<stdio.h>
int main(){

    int n,a[100],i ,pos,key;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements:");
    scanf("%d", &key);
    /*for(i=0;i<n;i++){
        if(key<a[i]){
            pos=i;
        }
        if(key>n-1){
            pos=n;
        }
    }*/
    printf("Enter the position:");
    scanf("%d", &pos);
    i=n-1;
    if(pos>n){
        printf("Error");
    }
    else{
    while(pos<=i){
        a[i+1]=a[i];
        i--;
    }
    a[pos]=key;

    for(i=0;i<n+1;i++){
        printf("%d ", a[i]);
    }
    }
    return 0;




}
