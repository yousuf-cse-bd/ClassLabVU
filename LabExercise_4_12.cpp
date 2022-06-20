#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int j = 0;
    long int result = 0;
    for(int i = 0;i<=20;i++)
    {
        j++;
        result = pow(j,2) + i;
        cout<<result<<"\t";
    }

    cout<<endl;

    return 0;
}
