#include<bits/stdc++.h>
using namespace std;

int hourglassSum( int arr[][6])//6 input sinze dite hobe for binding array
{
    int result= INT_MIN;
    for(int r=0; r<=3; r++)
    {
        for(int c=0; c<=3; c++)
        {
            int sum=arr[r][c]+arr[r][c+1]+arr[r][c+2]+arr[r+1][c+1]+arr[r+2][c]+arr[r+2][c+1]+arr[r+2][c+2];
            result=std::max(result,sum);
        }
    }


    return result;

}
int main()
{
    // vector<vector<int> > arr(6);
    int arr[6][6];
    for(int i=0; i<6; i++)
    {
       // arr[i].resize(6);
        for(int j=0; j<6; j++)
        {
            cin>>arr[i][j];
        }
    }
    int result=hourglassSum(arr);
    cout<<result;



    return 0;
}
