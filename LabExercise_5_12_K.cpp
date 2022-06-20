#include <iostream>
using namespace std;

int main()
{
    int i,j;
    ///Upper part
    for(i = 1;i<=5;i++) //Row
    {
        for(j = 4;j>=i;j--)//Space
        {
            cout<<" ";
        }
        for(j = 1;j<=i;j++)///Visible Part
        {
            cout<<"*";
        }
        cout<<endl;///Each and EveryLine Change
    }

    ///Lower Part
    int k;
    for(i = 4;i>=1;i--)//Row
    {
        for(j = 4;j>=i;j--)//Space
        {
            cout<<" ";
        }
        for(j = 1;j<=i;j++)///Visible Part
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
