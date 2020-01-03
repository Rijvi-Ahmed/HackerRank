#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
    cin>>n;
    int arr[100]={0},inp[n];
    for(int i=0;i<n;i++)
        {
        cin>>inp[i];
        arr[inp[i]]++;
    }
    for(int i=0;i<100;i++)
        cout<<arr[i]<<" ";
    return 0;
}
