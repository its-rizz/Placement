//Given a non-negative number n . The problem is to set the rightmost unset bit in the binary representation of n.

#include<iostream>
using namespace std;



int setBit(int n)
{
    return n|(n+1);
}

int main()
{
    int n; cin>>n;
    cout<<setBit(n)<<endl;
}