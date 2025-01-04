#include<iostream>
using namespace std;

void removeLastSetBit(int &number)
{
    number&=(number-1);
}

int main()
{
    int number; cin>>number;
    cout<<number<<endl;
    
}