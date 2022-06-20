#include <iostream>
using namespace std;

int main()
{
    float firstSub, secondSub, thirdSub, avg;

    cout<<"Enter First Subject Marks Here: ";
    cin>>firstSub;
    cout<<"Enter Second Subject Marks Here: ";
    cin>>secondSub;
    cout<<"Enter Third Subject Marks Here: ";
    cin>>thirdSub;

    avg = (firstSub + secondSub + thirdSub) / 3;

    if(avg >= 60 && avg<=100)
    {
        cout<<"First Division"<<endl;
    }
    else if(avg>=50 && avg<=59)
    {
        cout<<"Second Division"<<endl;
    }
    else if(avg>=40 && avg<=49)
    {
        cout<<"Third Division"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }

    return 0;
}
