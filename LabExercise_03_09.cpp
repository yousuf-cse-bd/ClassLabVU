#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char ch;
    cout<<"Enter First Value Here: ";
    cin>>num1;
    cout<<"Enter Second Value Here: ";
    cin>>num2;

    cout<<"Enter Operator Here: ";
    cin>>ch;
    if(ch == '+')
    {
        cout<<num1<<ch<<num2<<"="<<num1+num2<<endl;
    }
    if(ch == '-')
    {
       cout<<num1<<ch<<num2<<"="<<num1-num2<<endl;
    }
    if(ch == '*')
    {
       cout<<num1<<ch<<num2<<"="<<num1*num2<<endl;
    }
    if(ch == '/')
    {
        float a,b;
        a = float(num1);
        b = float(num2);

        cout<<a<<ch<<b<<"="<<a/b<<endl;
    }
    if(ch == '%')
    {
        cout<<num1<<ch<<num2<<"="<<num1%num2<<endl;
    }
    else
    {
        cout<<"Invalid Operation...!"<<endl;
    }
    return 0;
}
