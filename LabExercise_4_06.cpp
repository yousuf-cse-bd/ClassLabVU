#include <iostream>
using namespace std;

int main()
{
    int number, tmp, rem, sum = 0;

    cout<<"Enter Number Here: ";
    cin>>number;

    tmp = number;

    while(tmp != 0)
    {
        rem = tmp % 10;
        sum = sum + rem;
        tmp = tmp / 10;
    }

    cout<<number<<" = "<<sum<<endl;


    return 0;
}
