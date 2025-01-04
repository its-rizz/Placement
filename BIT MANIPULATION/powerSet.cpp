// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include<iostream>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums)
{
    int n=nums.size();
    vector<vector<int>> result;
    for(int i=0;i<(1<<n);i++)
    {
        vector<int> temp;
        int index=0;
        int x=i;
        while(x)
        {
            if(x&1) temp.push_back(nums[index]);
            index++;
            x>>=1;
        }
        result.push_back(temp); 
    }
    return result;
}

int main()
{
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<vector<int>> result=subsets(nums);
    for(auto &it:result)
    {
        for(auto &x:it)
            cout<<x<<" ";
        cout<<endl;
    }
}