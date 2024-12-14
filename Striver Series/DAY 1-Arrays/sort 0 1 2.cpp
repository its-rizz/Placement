// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

#include<iostream>
using namespace std;


void printArray(vector<int> &arr)
{
    for(auto &it:arr)
        cout<<it<<" ";
    cout<<endl;
}

void sortArray(vector<int>&arr)
{
    if (arr.size() <= 1) return;

    int n = arr.size();
    int first = 0;  // Points to the position to place the next `0`
    int last = n - 1;  // Points to the position to place the next `2`
    int current = 0;  // Current pointer to traverse the array

    while (current <= last) {
        if (arr[current] == 0) {
            // Swap current `0` with the `first` pointer
            swap(arr[current], arr[first]);
            first++;
            current++;
        } else if (arr[current] == 2) {
            // Swap current `2` with the `last` pointer
            swap(arr[current], arr[last]);
            last--;
        } else {
            // If the current element is `1`, just move forward
            current++;
        }
    }
    printArray(arr);
}


int main()
{
    int n; cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];
    sortArray(arr);

}