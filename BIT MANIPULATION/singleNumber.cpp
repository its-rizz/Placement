// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space

#include<iostream>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int result=0;
    for(auto &it:nums)
        result^=it;
    return result;
}

int main()
{
    int n; cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    cout<<singleNumber(num)<<endl;
}