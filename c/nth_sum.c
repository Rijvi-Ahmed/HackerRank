#include<stdio.h>
int main(){
    int n,a,b,c,x;
    scanf("%d", &n);
    scanf("%d %d %d", &a,&b,&c);
    x=recursion(n,a,b,c);
    printf("%d", x);
    return 0;
}
int recursion(int n,int a,int b,int c){

    int x;
    x=a+b+c;

    if(n>4){

        x=recursion(n=n-1,b,c,x);
    }
    return x;




}











