// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
using namespace std;


int maxProfit(vector<int> &arr)
{
    int n=arr.size();
    vector<int> minArray(n);
    minArray[0]=arr[0];
    for(int i=1;i<n;i++)
        minArray[i]=min(minArray[i-1],arr[i]);
    
    int result=0;
    int ind=n-1;
    while(ind>=0)
    {
        result=max(result,arr[ind]-minArray[ind]);
        ind--;
    }
    return result;    
}


int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<maxProfit(arr)<<endl;
}