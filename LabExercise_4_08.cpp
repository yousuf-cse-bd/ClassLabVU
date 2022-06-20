///Fibonacci Series
#include <iostream>
using namespace std;

int main()
{
    long long int firstValue, secondValue, thirdValue;
    int i,n;

    cout<<"Enter Nth Value Here: ";
    cin>>n;

    firstValue = 0;
    secondValue = 1;

    cout<<firstValue<<"\t"<<secondValue<<"\t";
    for(i = 2;i<=n;i++)
    {
        thirdValue = firstValue + secondValue;
        cout<<thirdValue<<"\t";

        firstValue = secondValue;
        secondValue = thirdValue;
    }

    cout<<endl;


    return 0;
}
