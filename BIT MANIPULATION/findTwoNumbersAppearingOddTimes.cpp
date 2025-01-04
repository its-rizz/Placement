// Given an unsorted array, Arr[] of size N and that contains even number of occurrences for all numbers except two numbers. Find the two numbers in decreasing order which has odd occurrences.
//

#include<iostream>
using namespace std;

bool isSet(long long int num,long long int ind)
{
    return (num>>ind)&1;
}


vector<long long int> twoOddNum(long long int Arr[],long long int N)
{
    long long int x=0;
    for(long long int i=0;i<N;i++)
        x^=Arr[i];

    long long ind=0;
    while(x)
    {
        if(x&1)
            break;
        ind++;
        x>>=1;
    }

    long long int first,second;
    first=second=0;

    for(long long int i=0;i<N;i++)
    {
        if(isSet(Arr[i],ind))
            first^=Arr[i];
        else
            second^=Arr[i];
    }

    vector<long long int> result;
    if(first>second)
    {
        result.push_back(first);
        result.push_back(second);
    }
    else
    {
        result.push_back(second);
        result.push_back(first);
    }

    return result;
}

int main()
{
    long long int N; cin>>N;
    long long int Arr[N];
    for(long long int i=0;i<N;i++) cin>>Arr[i];

    vector<long long int> result=twoOddNum(Arr,N);
    cout<<result[0]<<" "<<result[1]<<endl;
}