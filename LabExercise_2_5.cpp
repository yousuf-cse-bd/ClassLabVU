#include <iostream>
using namespace std;

int main()
{
    float value;
    int tmp;

    cout<<"Enter Value Here: ";
    cin>>value;

    tmp = (int)value;

    tmp = tmp % 10;
    cout<<tmp<<endl;

    return 0;
}
