///Fibonacci Series
#include <iostream>
using namespace std;

int fibonacciSeries(int i)
{
    if(i == 0 || i == 1)
    {
        return i;
    }
    else
    {
        return fibonacciSeries(i - 2) + fibonacciSeries(i - 1);
    }
}

int main()
{
    int n,i;
    cout<<"Enter Nth Value Here: ";
    cin>>n;

    for(i = 0 ; i<=n ;i++)
    {
        cout<<fibonacciSeries(i)<<"\t";
    }
    cout<<endl;

    return 0;
}

