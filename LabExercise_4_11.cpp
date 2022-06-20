#include <iostream>
using namespace std;

int main()
{
    int i,n = 40;
    for(i = 1;i<=n;i = i + 3)
    {
       if(i % 2 == 0)
       {
           cout<<"-"<<i<<"\t";
       }
       else
       {
           cout<<i<<"\t";
       }
    }

    cout<<endl;
    return 0;
}
