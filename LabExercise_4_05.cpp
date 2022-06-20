#include <iostream>
using namespace std;

int main()
{
    int n,i;
    long long int fact = 1;

    cout<<"Enter Nth Here: ";
    cin>>n;

    for(i = 2; i<=n;i++)
    {
        fact *= i;
    }

    cout<<n<<" = "<<fact<<endl;
    return 0;
}
