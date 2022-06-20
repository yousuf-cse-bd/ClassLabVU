///Armstrong Number

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int armstrongNum, tmp, rem, sum;
    sum = 0;

    cout<<"Enter A 3 Digits Value Here: ";
    cin>>armstrongNum;

    tmp = armstrongNum;

    while(tmp != 0)
    {
        rem = tmp % 10;
        sum = sum + (rem * rem * rem);
        tmp = tmp / 10;
    }


    if(armstrongNum == sum)
    {
        cout<<armstrongNum<<" is an Armstrong Number."<<endl;
    }
    else
    {
       cout<<armstrongNum<<" is not an Armstrong Number."<<endl;
    }
    return 0;
}
