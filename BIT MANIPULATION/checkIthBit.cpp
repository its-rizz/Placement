#include<iostream>
using namespace std;

bool isSet(int number,int position)
{
    return (number>>position)&1==1;
}

int main()
{
    int number,position; cin>>number>>position;
    if(isSet(number,position))
        cout<<"bit is set"<<endl;
    else
        cout<<"bit is not set"<<endl;
    
}