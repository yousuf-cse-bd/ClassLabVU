#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double D,x1,x2,y1,y2,x,y;

    cout<<"Enter x1 and x2:"<<endl;
    cin>>x1>>x2;
    cout<<"\nEnter y1 and y2:"<<endl;
    cin>>y1>>y2;
    x = pow((x2-x1),2);
    y = pow((y2-y1),2);

    D = x + y;

    cout<<"Distance D: "<<D<<endl;



    return 0;
}
