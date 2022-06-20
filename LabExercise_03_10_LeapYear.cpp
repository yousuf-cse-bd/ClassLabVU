///LeapYear
#include <iostream>
using namespace std;

int main()
{
    int year;
    while(1)
    {
        cout<<"Enter An Year Here: ";
        cin>>year;

        if(year %4 == 0 &&year % 400 == 0 || year % 100 !=0)
        {
            cout<<year<<" is An Leap Year."<<endl;
        }
        else
        {
            cout<<year<<" is an Normal Year."<<endl;
        }

    }

    return 0;
}
