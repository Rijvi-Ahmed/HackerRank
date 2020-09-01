#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int result;
    if(n<=1){
        return 1;
    }
    else
        result=n*fact(n-1);
        return result;
}
int main(){
int n;
cin>>n;
int result=fact(n);
cout<<result;
}
