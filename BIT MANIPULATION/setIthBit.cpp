#include<iostream>
using namespace std;

void setBit(int& number,int position)
{
    number|=(1<<position);
}

int main()
{
    int number,position; cin>>number>>position;
    setBit(number,position);
    cout<<number<<endl;
}