#include<iostream>
using namespace std;

bool getBit(int number,int position)
{
    return (number>>position)&1==1;
}

int main()
{
    int number,position; cin>>number>>position;
    cout<<getBit(number,position)<<endl; 
    
}