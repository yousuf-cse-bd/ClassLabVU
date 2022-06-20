#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    double avg;

    cout<<"Enter Three Numbers :"<<endl;
    cin>>num1>>num2>>num3;

    avg = (double)(num1 + num2 + num3)/3;
    cout<<avg<<endl;
    return 0;
}
