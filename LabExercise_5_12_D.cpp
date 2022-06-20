#include <iostream>
using namespace std;

int main()
{
    int i, j,k;
    for(i = 1;i<=5;i++) ///i = row
    {
        for(j = 5;j>=i;j--) ///j == space(left)
        {
            cout<<"  ";
        }
        for(k = 1;k<=i;k++)///k = StarSign
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

