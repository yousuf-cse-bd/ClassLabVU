///Strong Number == 145

#include <iostream>
using namespace std;
#define STRONG_Number 145

int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n - 1);
    }
}
int main(int argc, char const* argv[])
{
    int tmp = STRONG_Number;
    int sum, rem;
    sum = 0;
    while(tmp != 0)
    {
        rem = tmp % 10;
        sum = sum + factorial(rem);
        tmp = tmp / 10;
    }

    cout<<sum<<endl;
    if(sum == STRONG_Number)
    {
        cout<<"STRONG NUMBER"<<endl;
    }
    else
    {
        cout<<"NOT Strong Number"<<endl;
    }
    return 0;
}
