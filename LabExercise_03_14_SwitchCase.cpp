#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x,y;
    char option;
    cout<<"Enter Angle Value [Radius] Here: ";
    cin>>x;

    cout<<"Enter 'S/s' for Sin: "<<endl;
    cout<<"Enter 'T/t' for Tan: "<<endl;
    cout<<"Enter 'C/c' for Cos: "<<endl;
    cin>>option;
    switch(option)
    {
    case 's' || 'S':
        y = sin(x);
        cout<<"sin("<<x<<") = "<<y<<endl;
        break;
    case 't':
    case 'T':
        y = tan(x);
        cout<<"tan("<<x<<") = "<<y<<endl;
        break;
    case 'c':
    case 'C':
        y = cos(x);
        cout<<"cos("<<x<<") = "<<y<<endl;
        break;
    default:

        cout<<"Invalid Option...!"<<endl;
    }
    return 0;
}

