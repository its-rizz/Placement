// Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

// The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

// Return the quotient after dividing dividend by divisor.

// Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.

#include<iostream>
using namespace std;


int divide(int dividend,int divisor)
{
    if(dividend==0) return 0;
    if(dividend==divisor) return 1;

    bool sign=true;
    if(dividend<0 or divisor<0) sign=false;
    int quotient=0;

    while(dividend>=divisor)
    {
        int ind=0;
        while(dividend>=divisor*(1<<ind))
            ind++;
        ind--;
        dividend-=divisor*(1<<ind);
        quotient+=(1<<ind);

    }
    if(sign)
        return quotient;

    else
        return (-1)*quotient;
        

}


int main()
{
    int dividend,divisor; cin>>dividend>>divisor;
    cout<<divide(dividend,divisor)<<endl;
}