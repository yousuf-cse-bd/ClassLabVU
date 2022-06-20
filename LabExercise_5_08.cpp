#include <iostream>
using namespace std;

long long int factorial(long long int number)
{
    if(number<=1)
    {
        return 1;
    }
    else
    {
        return number*factorial(number -1 );
    }
}

int main()
{

    int n;
    cout<<"Enter Nth Value Here: ";
    cin>>n;

    cout<<n<<" Factorial: "<<factorial(n)<<endl;
    return 0;
}
