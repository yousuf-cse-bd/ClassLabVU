#include <iostream>
using namespace std;

int main()
{
    int i,num;
    long long int multiple;

    cout<<"Enter Nth Value Here :";
    cin>>num;

    for(i = 1 ;i<=10;i++)
    {
        multiple = i * num;
        cout<<num<<"x"<<i<<"="<<multiple<<endl;
    }

    return 0;
}
