#include <iostream>
using namespace std;

int main()
{
    int i, j;
    ///Upon Part

    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
///down Part
    for(i = 4;i>=1;i--)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
