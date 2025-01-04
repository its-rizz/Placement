#include<iostream>
using namespace std;

void clearBit(int& number,int position)
{
    int mask=1<<position;
    mask=~mask;
    number&=mask;
}

int main()
{
    int number,position; cin>>number>>position;
    clearBit(number,position);
    cout<<number<<endl;
}