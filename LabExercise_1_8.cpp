/*****
* @Author: Muhammad Yousuf Ali
* @Since: SunDay, 26 September 2020
**/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double S,a,b,c,A;

    cout<<"Enter Three Values Respectively[a,b,c]:\n";
    cin>>a>>b>>c;
    S = (a+b+c)/2;
    A = sqrt((S*(S-a)*(S-b)*(S-c)));
    cout<<"Area of Triangle :"<<A<<endl;

    return 0;
}
