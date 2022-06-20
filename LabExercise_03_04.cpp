#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Even Numbers: ";
    for(i = 0; i<=10; i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\nOdd Numbers: ";
    for(i = 0; i<=10; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
