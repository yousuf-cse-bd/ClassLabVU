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
    switch(ch)
    {

    case '+':

        cout<<num1<<ch<<num2<<"="<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1<<ch<<num2<<"="<<num1-num2<<endl;
        break;
    case '*':

        cout<<num1<<ch<<num2<<"="<<num1*num2<<endl;
        break;

    case '/':
        float a,b;
        a = float(num1);
        b = float(num2);

        cout<<a<<ch<<b<<"="<<a/b<<endl;
        break;
    case '%':
        cout<<num1<<ch<<num2<<"="<<num1%num2<<endl;
        break;
    default:
        cout<<"Invalid Operation...!"<<endl;
    }
    return 0;
}

