// You are given two integers L and R, your task is to find the XOR of elements of the range [L, R].

#include<iostream>
using namespace std;

int findXOR(int l,int r)
{
    l--;
    int first,second;
    switch(l%4)
    {
        case 1: first=1;
                break;

        case 2: first=l+1;
                break;

        case 3: first=0;
                break;

        default: first=l;
    }


    switch(r%4)
    {
        case 1: second=1;
                break;

        case 2: second=r+1;
                break;

        case 3: second=0;
                break;

        default: second=r;
    }

    return first^second;
}

int main()
{
    int l,r; cin>>l>>r;
    cout<<findXOR(l,r)<<endl;
}