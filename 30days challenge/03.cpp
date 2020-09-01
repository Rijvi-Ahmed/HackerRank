#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double meal;
    int tip,tax;
    cin>>meal>>tip>>tax;
    double result1=(meal*tip)/100;
    double result2=(meal*tax)/100;
    double total=meal+result1+result2;
    cout<<round(total);

}
