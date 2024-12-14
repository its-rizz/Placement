// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

#include<iostream>
using namespace std;

int maxSubArray(vector<int> &nums)
{

    //Check if all the element is negative
    int mx=INT_MIN;
    for(auto &it:nums)
        mx=max(it,mx);
    
    if(mx<0)
        return mx;

    int currentBest=0;
    int result=0;
    int sum=0;

    for(auto &it:nums)
    {
        sum+=it;
        currentBest=max(currentBest,sum);
        result=max(result,currentBest);
        if(sum<0)
        {
            sum=0;
            currentBest=0;
        }
    }

    return result;
}

int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<maxSubArray(arr)<<endl;
}