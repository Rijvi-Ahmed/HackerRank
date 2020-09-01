#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k=10,ans;
    cin>>n;
    for(i=1;i<=k;i++){
        ans=n*i;
        cout<<n<<" x "<<i<<" = "<<ans<<endl;
    }
    return 0;
}
