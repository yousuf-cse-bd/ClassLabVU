#include <iostream>
using namespace std;

int main()
{
    int n,xn;
    cout<<"Enter Nth Here: ";
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        xn = (i*(i - 1)/2)+1;
        cout<<xn<<"\t";
    }

    return 0;
}
