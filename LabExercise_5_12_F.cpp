#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i = 5;i>=1;i--)
    {
        for(j = 1;j<=i;j++)
        {
            if(i == 1)
            cout<<j<<" ";
            else
            cout<<i<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}
