#include <iostream>
using namespace std;

int main()
{
    int n, xn, i;

    cout<<"Enter Nth Value Here: ";
    cin>>n;
    for(i = 1;i<=n;i++)
    {
        xn = (i*i)/2 - i/2 + 1;

        cout<<xn<<"\t";
    }

    return 0;
}
