#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i = 69; i>=65; i--)
    {
        for(j = 65; j<=i; j++)
        {
           char ch = (char)j;
           cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}

