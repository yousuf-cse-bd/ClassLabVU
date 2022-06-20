#include <iostream>
using namespace std;

int main()
{
    int n,i, count,j = 0;

    count = 0;
    n = 20;
    for(i = 1;i<=n;i++)
    {
        j = i;
        if(j>=0)
        {
            j = i - 1;
            cout<<" ("<<j<<")+"<<" ";
        }
        cout<<" ("<<i<<")+"<<" ";
    }


    return 0;
}
