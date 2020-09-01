#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        string s;
        string s1, s2;//it is null string when valu is replaced by '\0' charecter the its caled empty string
        cin >> s;
        for(int j=0; j < s.size(); j++){
            if(j%2==0){
                s1 += s[j];
            }else{
                s2+= s[j];
            }
        }
        cout << s1 << " " << s2 << endl;
    }
    return 0;
}
