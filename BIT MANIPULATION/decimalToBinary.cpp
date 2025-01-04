#include<iostream>
#include<bitset>
#include<string>
using namespace std;

//Method1-- Recursion
void convertToBinary(int number,string& binary)
{
    if(number==0)
        return;
    convertToBinary(number/2,binary);
    binary+=to_string(number%2);
}

//Method 2
void convertToBinary1(int number,string &binary)
{
    while(number)
    {
        binary+=to_string(number%2);
        number/=2;
    }
    reverse(binary.begin(),binary.end());
}

//Method 3
void convertToBinary2(int number, string& binary) {
    binary = bitset<8>(number).to_string();
}


int main()
{
    int number; cin>>number;
    string binary;
    convertToBinary2(number,binary);
    cout<<binary<<endl;
}