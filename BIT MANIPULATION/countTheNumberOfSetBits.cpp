//You are given a number n. Find the total count of set bits for all numbers from 1 to n (both inclusive).

#include<iostream>
using namespace std;

int countSetBits(int n)
{
    if(n==0) return 0;
    //Highest Power of 2 less than or equal to n
    int x=log2(n);
    int first=x*pow(2,x-1); //Count the total set bits upto the 2^x-1
    int second=n-pow(2,x)+1;
    int third=countSetBits(n-pow(2,x));

    return first+second+third;
}

int main()
{
    int n; cin>>n;
    cout<<countSetBits(n)<<endl;
}