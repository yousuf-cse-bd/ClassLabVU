#include <iostream>
using namespace std;

int main()
{
    int x,y,z,tmp;

    cout<<"Enter X,Y,Z Respectively:"<<endl;
    cin>>x>>y>>z;

    tmp = x;
    x = y;
    y = z;
    z = tmp;

    cout<<"X = "<<x<<"\tY = "<<y<<"\tZ = "<<z<<endl;


    return 0;
}
