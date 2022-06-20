/*****
* @Author: Muhammad Yousuf Ali
* @Since: SunDay, 26 September 2020
**/

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout<<a+b<<endl;
}

void sub(int a, int b)
{
    cout<<a-b<<endl;
}


int main()
{

    int num1,num2;
    cout<<"Enter First Value Here: ";
    cin>>num1;
    cout<<"\nEnter Next Value Here: ";
    cin>>num2;

    add(num1,num2);
    sub(num1,num2);


    return 0;
}
