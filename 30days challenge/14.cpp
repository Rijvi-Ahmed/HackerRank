#include<bits/stdc++.h>
using namespace std;
int computeDifference(int arr[],int len)
{
    int i;
    int min=100;
    int max=1;

    for(i=0; i<len; ++i)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int result=max-min;
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int result=computeDifference(arr,n);
    cout<<result;
    return 0;
}
