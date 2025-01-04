#include<iostream>
using namespace std;

bool isPowerOfTwo(int number)
{
    return (number&(number-1))==0;
}

int main()
{
    int number; cin>>number;
    if(isPowerOfTwo(number))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}