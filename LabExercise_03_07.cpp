#include <iostream>
using namespace std;

int main()
{
    int x, y;
    x = 13;
    y = 25;

    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout<<"\nX = "<<x<<endl;
    cout<<"Y = "<<y<<endl;


    return 0;
}

