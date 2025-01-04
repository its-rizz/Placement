#include<iostream>
using namespace std;

int countSetBits(int number)
{
    int count=0;
    while(number)
    {
        if(number&1)
            count++;
        number>>=1;
    }
    return count;
}

//Method 2 -- inbuilt library
int countSetBits1(int number)
{
    return __builtin_popcount(number);
}

int main()
{
    int number; cin>>number;
    cout<<"The number of set bits is : "<<countSetBits1(number)<<endl;
}