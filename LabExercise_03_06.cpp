#include <iostream>
using namespace std;

int main()
{
    int x, y, tmp;
    x = 13;
    y = 25;

    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;

    tmp = x;
    x = y;
    y = tmp;

    cout<<"\nX = "<<x<<endl;
    cout<<"Y = "<<y<<endl;


    return 0;
}
