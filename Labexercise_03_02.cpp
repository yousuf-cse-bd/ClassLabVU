#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Any Positive Value Here: ";
    cin>>num;

    if(num % 2 ==0)
    {
        cout<<pow(num,2)<<endl;
    }
    else
    {
        cout<<pow(num,3)<<endl;
    }

    return 0;
}
