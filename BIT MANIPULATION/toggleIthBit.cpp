#include<iostream>
using namespace std;

void toggleBit(int& number,int position)
{
    int mask=1<<position;
    number^=mask;
}

int main()
{
    int number,position; cin>>number>>position;
    toggleBit(number,position);
    cout<<number<<endl;
}