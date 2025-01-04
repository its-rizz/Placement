#include<iostream>
using namespace std;

void swapNumbers(int& number1,int& number2)
{
    number1^=number2;
    number2^=number1;
    number1^=number2;
}

int main()
{
    int number1,number2; cin>>number1>>number2;
    cout<<number1<<" "<<number2<<endl;
    swapNumbers(number1,number2);
    cout<<number1<<" "<<number2<<endl;
}