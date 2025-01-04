#include<iostream>
#include<string>
using namespace std;


//Method1-- Recursion
void binaryToDecimal(int binary,int& decimal,int i)
{
    if(binary==0)
        return;
    decimal+=(binary%10)*pow(2,i);
    binaryToDecimal(binary/10,decimal,i+1);
}

//Method2--Iteration
void binaryToDecimal1(int binary,int& decimal,int i)
{
    while(binary)
    {
       decimal+=(binary%10)*pow(2,i);
       binary/=10;
       i++;
    }
}

//Method3 -- Pre-Defined function
void binaryToDecimal2(int binary,int& decimal)
{
    string binaryStr = to_string(binary);
    decimal=stoi(binaryStr,0,2);
}


int main()
{
    int binary; cin>>binary;
    int decimal=0;
    binaryToDecimal2(binary,decimal);
    cout<<decimal<<endl;
}