/*****
* @Authoe: Muhammad Yousuf Ali
* @Since: ThursDay, 16 July 2020
* 4.Given the radius of a circle, write a program to compute and display its area. Use a symbolic constant to define the π value and assume a suitable value for radius.
**/

#include <iostream>
#define PI 3.14159
using namespace std;

int main(int argc, char const *argv[])
{
    double area,r;
    cout<<"Enter Radius, R Here: ";
    cin>>r;

    area = 2*PI*r;
    cout<<"Radius: "<<r<<"\tand Area of a Circle: "<<area<<endl;

    return 0;
}
    