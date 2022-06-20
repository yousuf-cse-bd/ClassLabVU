///Prime Number
#include <iostream>
using namespace std;

int main()
{
    int number, i;
    bool b = true;

    cout<<"Enter A Positive Value Here: ";
    cin>>number;

    for(i = 2 ;i<number;i++)
    {
        if(number % i == 0)
        {
            b = false;
        }
    }
    if(b == true)
    {
        cout<<number<<" is Prime Number."<<endl;
    }
    else
    {
        cout<<number<<" is not Prime Number."<<endl;
    }

    return 0;
}
