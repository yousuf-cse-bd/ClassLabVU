#include <iostream>
using namespace std;

int main()
{

    float num1,num2,num3,result;

    cout<<"Enter Three values Here Respectively:"<<endl;
    cin>>num1>>num2>>num3;

    result = (num1 + num2 + num3);
    cout<<"Sum of These Values: "<<result<<endl;
    result = result/3;
    cout<<"Average Those Values: "<<result<<endl;

    if(num1> num2 && num1 > num3)
    {
        cout<<num1<<" Largest of Three Values."<<endl;
    }
    else if(num2> num1 && num2 >num3)
    {
        cout<<num2<<" Largest of Three Values."<<endl;
    }
    else
    {
        cout<<num3<<" Largest of Three Values."<<endl;
    }

    cout<<endl;
    if(num1< num2 && num1 < num3)
    {
        cout<<num1<<" Smallest of Three Values."<<endl;
    }
    else if(num2< num1 && num2 <num3)
    {
        cout<<num2<<" Smallest of Three Values."<<endl;
    }
    else
    {
        cout<<num3<<" Smallest of Three Values."<<endl;
    }

    return 0;
}
