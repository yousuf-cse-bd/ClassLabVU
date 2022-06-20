#include <iostream>
using namespace std;

int main()
{
    int tmp, rem, sum,num;
    sum = 0;
    cout<<"Enter A Positive Value Here: ";
    cin>>num;

    tmp = num;
    while(tmp!=0)
    {
        rem = tmp % 10;
        sum += rem;
        tmp = tmp / 10;
    }

    cout<<num<<" = "<<sum<<endl;
    return 0;
}
