#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    n = 10;
    sum = 0;

    for(i = 1;i<=10;i++)
    {
        sum += i;
        cout<<sum<<"\t";
    }

    cout<<endl;

    return 0;
}
